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
    int i, j;

    printf("Input integer(lt zero to quit):");
    while (scanf("%u", &user_input) == 1)
    {
        if (user_input <= 0)
            break;
        
        for (i = 1; i < user_input; i++)
        {
            is_prime = true;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    is_prime = false;
            }
            if (is_prime)
                printf("lt %d prime is: %d\n", user_input, j);
        }
    }
}