/*
输入字符串数组, 倒序打印
*/
#include <stdio.h>
#include <string.h>
#define hello_world "hello world"

int main(void)
{
    char word[30];
    printf("Input the words your want reverse:\n");
    scanf("%s", word);

    for (int index = strlen(word) - 1; index >= 0; index--)
    {
        printf("%c", word[index]);
    }

    printf("\n");

    return 0;
}