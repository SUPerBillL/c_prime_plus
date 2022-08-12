/*
使用函数返回ex_8.c的结果
*/
#include <stdio.h>
float handle_float(float start, float end);

int main(void)
{
    float start, end;

    printf("Input two number:");
    while (scanf("%f %f", &start, &end) == 2)
    {
        printf("result: %f\n", handle_float(start, end));
        printf("Type next two number:");
    }

    printf("End!\n");

    return 0;
}

float handle_float(float start, float end)
{
    return (start - end) / (start * end);
}