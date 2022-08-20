/*
 * 编写程序读取输入, 读到#停止, 报告ei出现的次数
 * 注意:程序要记录前一个字符和当前字符.
 * 用"Receive your eieio award" 输入测试.
 */
#include <stdio.h>
/* 此处常量名定义更加易于扩展和修改 */
#define FIRST 'e'
#define SECOND 'i'
void get_char_pair(char first, char second);

int main(void)
{
    char first, second;
    int char_pair_counter = 0;
    second = EOF;

    while ((second = getchar()) != '#')
    {
        if (first == FIRST && second == SECOND)
            char_pair_counter++;
        first = second;
    }
    printf("There is ei:%d\n", char_pair_counter);

    return 0;
}

/* 取自教材中另外一种比较巧妙的处理方案-标记 */
void get_char_pair(char first, char second)
{
    char ch;
    int counter = 0;
    _Bool halfpair = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case FIRST:
            halfpair++;
            break;
        case SECOND:
            if (halfpair)
            {
                halfpair = 0;
                counter++;
            }
            break;
        default:
            halfpair = 0;
            break;
        }
    }
    printf("There is ei:%d\n", counter);

    return 0;
}