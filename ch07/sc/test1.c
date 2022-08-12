#include <stdio.h>

int main(void)
{
    char ch;
    
    while ((ch = getchar()) != '#')
    {
        // printf("%c\n", ch);
        putchar(ch);
    }

    printf("End\n");
    return 0;
}