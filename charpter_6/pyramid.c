/*
编写一个程序，提示用户输入大写字母，使用嵌套循环以下面金字塔型的格式打印字母
*/
#include <stdio.h>
#define START_ALPHA 'A'

int main(void)
{
    int line;
    char user_input, element;

    printf("Input start alpha:");
    scanf("%c", &user_input);

    for (line = 0; line < user_input - START_ALPHA + 1; line++)
    /* 外层循环处理行转换 */
    {
        int i, j, h;
        element = START_ALPHA - 1;
        /* 处理留白 */
        for (i = 0; i < user_input - START_ALPHA + 1 - line; i++)
        {
            printf(" ");
        }

        /* 处理增字符 */
        for (j = 0; j < line + 1; j++)
        {
            element++;
            printf("%c", element);
        }

        /* 处理减字符 */
        for (h = 0; h < line; h++)
        {
            element--;
            printf("%c", element);
        }

        printf("\n");
    }

    return 0;
}