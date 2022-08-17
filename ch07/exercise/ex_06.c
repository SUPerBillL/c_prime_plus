/*
* 编写程序读取输入, 读到#停止, 报告ei出现的次数
* 注意:程序要记录前一个字符和当前字符.
* 用"Receive your eieio award" 输入测试.
*/
#include <stdio.h>
#define E 'e'
#define I 'i'

int main(void)
{
    char first, second;
    int ei_counter = 0;
    second = EOF;

    while ((second = getchar()) != '#')
    {
        if (first == E && second == I)
            ei_counter++;
        first = second;
    }
    printf("There is ei:%d\n", ei_counter);

    return 0;
}