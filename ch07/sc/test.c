#include <stdio.h>

int main(void)
{
    int i;
    char ch;
    for (i = 0; i < 10; i++)
    {
        ch = getchar();
        if (ch == '\n')
            continue;
        putchar(ch);
    }
    printf("int: %d", i);

    return 0;
}