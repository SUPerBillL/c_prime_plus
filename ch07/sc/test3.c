#include <stdio.h>

int main(void)
{
    int a = 10;
    int shed, help;

    if (a < 14)
    goto A;

    shed = 2;
    goto B;
    A: shed = 3;
    B: help = 2 * shed;

    printf("%d, %d", shed, help);

    return 0;
}

