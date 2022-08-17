/*
* 使用 switch 重写练习4
*/
#include <stdio.h>
#define PERIOD '.'
#define EXCLAMATION '!'

int main(void)
{
    char ch;
    int period_count = 0;
    int exclamation_count = 0;

    printf("Input characters your want"
            "change period and exclamation(# to end):");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case PERIOD:
                putchar(EXCLAMATION);
                period_count++;
                break;
            case EXCLAMATION:
                putchar(EXCLAMATION);
                putchar(EXCLAMATION);
                exclamation_count++;
                break;
            default:
                putchar(ch);
        }
    }

    printf("\n");
    printf("PERIOD changed: %d\n", period_count);
    printf("EXCLAMATION changed: %d\n", exclamation_count);

    return 0;
}