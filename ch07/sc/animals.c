#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Type: a letter: ");
    
    while ((ch = getchar()) != '#')
    {
        if (islower(ch))
            switch (ch)
            {
            case 'a':
                printf("This is argali\n");
                break;
            
            case 'b':
                printf("This is bee\n");
                break;

            case 'c':
                printf("This is cat\n");
                break;

            default:
                printf("This is default\n");
                break;
            }
    }

    printf("Done\n");
    return 0;
}