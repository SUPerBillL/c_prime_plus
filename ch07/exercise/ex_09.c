/*
* 编写一个程序, 只接受正整数的输入, 然后显示所有小于或等于
* 该数的素数.
*/
#include <stdio.h>
# include <stdbool.h>

int main(void)
{
    unsigned int user_input;
    _Bool is_prime;

    printf("Input integer(lt zero to quit):");
    while (scanf("%u", &user_input) == 1)
    {
        if (user_input <= 0)
            break;
        
        for (int i = 1; i < user_input; i++)
        {
            for (int count = 1; count * count < i; count++)
            {
                for (int j = 1; j < count; j++)
                {
                    if (count % j == 0)
                        is_prime = false;
                }
                if (is_prime == true)
                {
                    printf("lt %u prime is:%d\n", user_input, count);
                }
            }
        }
    }
}