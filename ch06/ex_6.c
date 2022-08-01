/*
编写一个程序打印一个表格, 每一行打印一个整数、该数的平方、该数的立方;
用户输入上下限.
*/
#include <stdio.h>

int main(void)
{
    int start, end, index;
    printf("Input start number, you want get square and cubic:");
    scanf("%d", &start);
    printf("Input end number, you want get square and cubic:");
    scanf("%d", &end);

    for (index = start; index < end + 1; index++)
    {
        printf("integer: %3d, square: %3d, cubic: %3d\n", index, index * index, index * index * index);
    }

    return 0;
}