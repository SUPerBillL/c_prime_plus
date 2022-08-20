/*
 * 使用if else语句编写一个程序读取输入, 读到#停止. 用感叹号
 * 替换句号, 用两个感叹号替换原来的感叹号, 最后报告进行了多少
 * 次替换
 */
#include <stdio.h>
#define PERIOD '.'
#define EXCLAMATION '!'

int main(void)
{
    char ch;
    int period_count = 0;
    int exclamation_count = 0;

    printf("Input characters your want"
           "change period and exclamation(# to end):");
    while ((ch = getchar()) != '#')
    {
        if (ch == PERIOD)
        {
            putchar(EXCLAMATION);
            period_count++;
        }
        else if (ch == EXCLAMATION)
        {
            putchar(EXCLAMATION);
            putchar(EXCLAMATION);
            exclamation_count++;
        }
        else
            putchar(ch);
    }
    printf("\n");
    printf("PERIOD changed: %d\n", period_count);
    printf("EXCLAMATION changed: %d\n", exclamation_count);

    return 0;
}