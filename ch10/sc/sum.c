#include <stdio.h>
#define SIZE 10

int sum(int [], int);

int main(void)
{
    int marbles[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long answer;

    // int * poi = &marbles[0];
    // poi == marbles;
    // marbles == &marbles[0];

    // poi + n --> marbles offset n (not n bytes);
    // marbles + n == poi + n;
    // marbles[n] == *(poi + n);

    // but pointer is pointer; array is array;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);

    return 0;
}

int sum(int array[], int len)
{
    int total = 0;

    // while (start < end)
    // {
    //     total += *start;
    //     start++;
    // }
    // while (start < end)
    // {
    //     // total += *(++start);
    //     total += *(start++);
    //     printf("this total is %d\n", total);
    // }
    // int len = end - start;
    for (int n = 0; n < len; n++)
    {
        total += array[n];
    }

    return total;
}