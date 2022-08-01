/*
编写程序, 要求用户输入两个浮点数, 并打印两数之差除以两数乘积的结果;
在用户输入非数字之前, 程序需要处理用户输入的每对值.
*/
#include <stdio.h>

int main(void)
{
    float start, end;
    
    printf("Input two number:");
    while (scanf("%f %f", &start, &end) == 2)
    {
        printf("result: %f\n", (start - end) / (start * end));
        printf("Type next two number:");
    }
    printf("End!");
    
    return 0;
}