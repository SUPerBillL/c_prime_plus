/*
编写一个数组读入8个整数;
并倒叙打印数组
*/
#include <stdio.h>
#define SIZE 8

int main(void)
{
    int user_input;
    int int_array[SIZE];

    printf("Input eight numbers: ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &user_input);
        int_array[i] = user_input;
    }

    for (int i = SIZE - 1; i >= 0; i--)
    {
        printf("Index: %d, Value: %d\n", i, int_array[i]);
    }

    printf("End! Bye\n");

    return 0;
}