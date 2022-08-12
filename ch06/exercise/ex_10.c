/*
输入上下限整数, 计算并打印上下限内所有整数平方和;
继续输入, 直到用户输入的上限大于下限
*/
#include <stdio.h>

int main(void)
{
    int start, end;

    printf("Input two number that you want start and end: ");
    scanf("%d %d", &start, &end);

    while (start < end)
    {
        int sum = 0;
        for (int index = start; index < end + 1; index++)
        {
            sum += index * index;
        }

        printf("In number: %d and %d all values sum: %d\n", start, end, sum);
        printf("Next two number that you want start and end: ");
        scanf("%d %d", &start, &end);

    }
    printf("Input start: %d Large than end: %d\n", start, end);
    printf("End! Bye\n");
}