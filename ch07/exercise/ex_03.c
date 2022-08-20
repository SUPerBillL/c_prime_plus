/*
 * 编写一个程序, 读取整数直到用户输入0. 输入结束后, 程序应报
 * 告用户输入的偶数(不包括 0)个数、这些偶数的平均值、输入的奇
 * 数个数及其奇数的平均值.
 */
#include <stdio.h>

int main(void)
{
    int user_input;
    int odd_number_counter = 0;
    int even_number_counter = 0;
    /* 此处定义奇偶数的和是否更加易于扩展 */
    float odd_numer_avgs = 0;
    float even_numer_avgs = 0;

    printf("Input digital you want get average(0 to end):");
    while (scanf("%d", &user_input) == 1)
    {
        if (user_input == 0)
            break;
        /* 此处修改为单独的测试分支会更加符合逻辑 */
        if (user_input % 2 == 0)
        {
            even_numer_avgs = (even_number_counter * even_numer_avgs + user_input) / (even_number_counter + 1);
            even_number_counter++;
        }
        else
        {
            odd_numer_avgs = (odd_number_counter * odd_numer_avgs + user_input) / (odd_number_counter + 1);
            odd_number_counter++;
        }
        printf("Next Number:");
    }

    printf("Odd Number :%d  The average is: %.2f\n", odd_number_counter, odd_numer_avgs);
    printf("Even Number :%d  The average is: %.2f\n", even_number_counter, even_numer_avgs);

    return 0;
}