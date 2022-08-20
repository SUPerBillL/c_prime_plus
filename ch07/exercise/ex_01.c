/*
 * 编写一个程序读取输入, 读到#字符停止, 然后报告读取的空格数、
 * 换行符数和所有其他字符的数量.
 */
#include <stdio.h>

int main(void)
{
    char ch;
    int newline = 0, space = 0, other_char = 0;

    printf("Input String You want count char(end to '#'):");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '\n':
            newline++;
            break;
        case ' ':
            space++;
            break;
        default:
            other_char++;
            break;
        }
    }
    printf("There is %d newline char, %d space, other_char is %d\n", newline, space, other_char);

    return 0;
}