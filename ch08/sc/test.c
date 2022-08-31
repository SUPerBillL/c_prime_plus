#include <stdio.h>

int main(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
            printf("\n");
    }

    while ((ch = getchar()) != '\n')    /* blank在此处也会处理 */
    {
        putchar(ch);
    }

    printf("\n");
    printf("%d", input);

    return 0;
}