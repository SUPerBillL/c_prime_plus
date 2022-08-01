/*
编写一个程序，提示用户输入大写字母，使用嵌套循环以下面金字塔型的格式打印字母
*/
#include <stdio.h>
#define START_ALPHA 'A'

int main(void)
{
    int line, index, num;
    char user_input, element;

    printf("Input start alpha:");
    scanf("%c", &user_input);
    num = user_input - START_ALPHA + 1;

    for (line = 0; line < num; line++)
    /* 外层循环处理行转换 */
    {
        element = START_ALPHA - 1;
        /* 处理留白 */
        for (index = 0; index < num - line; index++)
        {
            printf(" ");
        }

        /* 处理增字符 */
        for (index = 0; index < line + 1; index++)
        {
            element++;
            printf("%c", element);
        }

        /* 处理减字符 */
        for (index = 0; index < line; index++)
        {
            element--;
            printf("%c", element);
        }

        printf("\n");
    }

    return 0;
}