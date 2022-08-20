/*
 * 具体题目信息查阅第7章练习8
 */
#include <stdio.h>
#define OVERTIME_HOUR_RATE 1.5
#define BASE_HOUR 40.0
#define WAGE_LEVEL1 8.75
#define WAGE_LEVEL2 9.33
#define WAGE_LEVEL3 10.00
#define WAGE_LEVEL4 11.20
#define INCOME_LEVEL1 300.0
#define INCOME_LEVEL2 450.0
#define RATE1 0.15                                          // 收入小于LEVEL1
#define RATE2 0.20                                          // 收入介于LEVEL1--INCOME_LEVEL2
#define RATE3 0.25                                          // 超出LEVEL2
#define TAX1 INCOME_LEVEL1 *RATE1                           // 收入小于LEVEL1
#define TAX2 TAX1 + (INCOME_LEVEL2 - INCOME_LEVEL1) * RATE2 // 收入介于LEVEL1--INCOME_LEVEL2
#define EARNING1 300 * (1 - RATE1)
#define EARNING2 EARNING1 + 150 * (1 - RATE2)
#define BAD_STATUS -1
#define QUIT 0

void show_menu(void);
float get_wage_per_hour(int wage_level);
void show_income_by_working_hours(float wage_per_hour);

int main(void)
{
    int user_input;
    float wage_per_hour;
    show_menu();

    while (scanf("%d", &user_input) == 1)
    {
        wage_per_hour = get_wage_per_hour(user_input);
        if (wage_per_hour == BAD_STATUS)
        {
            printf("Input:%d Error!\n", user_input);
            printf("Enter again!\n");
            show_menu();
            continue;
        }
        else if (wage_per_hour == QUIT)
            break;

        show_income_by_working_hours(wage_per_hour);
        show_menu();
    }

    printf("Quit!\n");
    return 0;
}

void show_menu(void)
{
    char s1[] = "1) $8.75/hr";
    char s2[] = "2) $9.33/hr";
    char s3[] = "3) $10.00/hr";
    char s4[] = "4) $11.20/hr";
    char s5[] = "5) quit";
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("%-40s", s1);
    printf("%-40s\n", s2);
    printf("%-40s", s3);
    printf("%-40s\n", s4);
    printf("%-40s\n", s5);
    printf("*****************************************************************\n");
}

float get_wage_per_hour(int wage_level)
{
    float wage_per_hour;
    switch (wage_level)
    {
    case 1:
        wage_per_hour = WAGE_LEVEL1;
        break;
    case 2:
        wage_per_hour = WAGE_LEVEL2;
        break;
    case 3:
        wage_per_hour = WAGE_LEVEL3;
        break;
    case 4:
        wage_per_hour = WAGE_LEVEL4;
        break;
    case 5:
        wage_per_hour = QUIT;
        break;
    default:
        wage_per_hour = BAD_STATUS;
        break;
    }

    return wage_per_hour;
}

void show_income_by_working_hours(float wage_per_hour)
{
    float work_hours;
    float income = 0, tax = 0, taxed_income = 0;

    printf("There is $%.2f per hour\n", wage_per_hour);
    printf("Input your working hours(c to change Level)\n");
    while (scanf("%f", &work_hours) == 1)
    {
        if (work_hours > BASE_HOUR)
            work_hours *= OVERTIME_HOUR_RATE;
        income = wage_per_hour * work_hours;

        if (income < INCOME_LEVEL1)
            tax = income * RATE1;
        else if (income < INCOME_LEVEL2)
            tax = TAX1 + (income - INCOME_LEVEL1) * RATE2;
        else
            tax = TAX2 + (income - INCOME_LEVEL2) * RATE3;
        taxed_income = income - tax;

        printf("Work in: %.2fhours income is: %.2f, tax is: %.2f, "
               "taxed_income: %.2f\n",
               work_hours, income, tax, taxed_income);
        printf("Input next working hours(c to change Level)\n");
    }
    
    while (getchar() != '\n')
        continue;
}
