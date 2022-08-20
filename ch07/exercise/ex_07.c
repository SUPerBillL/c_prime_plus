/*
 * 编写一个程序, 提示用户输入一周工作的小时数, 然后打印工资
 * 总额、税金和净收入. 做如下假设:
 * a. 基本工资 = 10.00 美元/小时;
 * b. 加班(超过40小时) = 1.5倍的时间;
 * c. 税率: 前 300 美元为 15%
 *         续 150 美元为 20%;
 *          余下的为 25%;
 * 用 #define 定义符号常量.不用在意是否符合当前税法;
 */
#include <stdio.h>
#define OVERTIME_HOUR_RATE 1.5
#define BASE_HOUR 40.0
#define BASE_WAGE_PER_HOUR 10.0
/* 此处注释也是无效注释, 很大概率会因为收入金额的变化修改 */
/* 优化后常量定义 */
#define LEVEL1 300.0
#define LEVEL2 450.0
#define RATE1 0.15                            // 收入小于LEVEL1
#define RATE2 0.20                            // 收入介于LEVEL1--LEVEL2
#define RATE3 0.25                            // 超出LEVEL2
#define TAX1 LEVEL1 *RATE1                    // 收入小于LEVEL1
#define TAX2 TAX1 + (LEVEL2 - LEVEL1) * RATE2 // 收入介于LEVEL1--LEVEL2
#define EARNING1 300 * (1 - RATE1)
#define EARNING2 EARNING1 + 150 * (1 - RATE2)

/*
 * 反思: 此函数编写并无主观逻辑上的问题, 但仍存在明显不足;
 * 函数的逻辑编写完全主观上从业务出发, 扩展性非常差, 业务
 * 逻辑应该从税率和税额的关系出发, 而不应该从实际收入编写.
 * 即:
 * 如果业务需要展示含税的收入和不含税的收入, 重写部分非常多
 */
int main(void)
{
    float work_hours;
    float income = 0;

    printf("Input your working hours(q to quit):");
    while (scanf("%f", &work_hours) == 1)
    {
        if (work_hours > 40.0)
            work_hours *= OVERTIME_HOUR_RATE;
        income = BASE_WAGE_PER_HOUR * work_hours;

        if (income < 300.0)
            income *= (1 - RATE1);
        else if (income < 450.0)
            income = EARNING1 + (income - 300.0) * (1 - RATE2);
        else
            income = EARNING2 + (income - 450.0) * (1 - RATE3);

        printf("Work in %.3f hours income is %.3f\n", work_hours, income);
        printf("Input next working hours:");
    }
    printf("Quit, Bye!");

    return 0;
}

float get_income_by_working_hours(float hours)
{
    float work_hours;
    float income = 0, tax = 0, taxed_income = 0;

    printf("Input your working hours(q to quit):");
    while (scanf("%f", &work_hours) == 1)
    {
        if (work_hours > BASE_HOUR)
            work_hours *= OVERTIME_HOUR_RATE;
        income = BASE_WAGE_PER_HOUR * work_hours;

        if (income < LEVEL1)
            tax = income * RATE1;
        else if (income < LEVEL2)
            tax = TAX1 + (income - LEVEL1) * RATE2;
        else
            tax = TAX2 + (income - LEVEL2) * RATE3;
        taxed_income = income - tax;

        printf("Work in: %.3fhours income is: %.3f, tax is: %.3f, \
                taxed_income: %.3f\n",
               work_hours, income, tax, taxed_income);
        printf("Input next working hours:");
    }
    printf("Quit, Bye!");

    return 0;
}