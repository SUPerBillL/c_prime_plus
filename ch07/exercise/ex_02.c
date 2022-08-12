/*
* 编写一个程序读取输入, 读到#字符停止.程序要打印每个输入的字符以及
* 对应的ASCII码(十进制).每行打印8个"字符-ASCII码"组合.建议：使
* 用字符计数和求模运算(%)在每8个循环周期打印一个换行符.
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int i = 0;

    printf("Input Chars('#' to quit):\n");
    while ((ch = getchar()) != '#')
    {
        if (isspace(ch))
            {
                i = 0;
                continue;
            }
        else
            printf("char:%c ASCII:%d ", ch, ch);

        if (++i % 8 == 0)
            printf("\n");
    }
    printf("End!\n");
    
    return 0;
}
