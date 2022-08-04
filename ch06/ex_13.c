// C Primer Plus
// Chapter 6 Exercise 13:

// Write a program that creates an eight-element array of ints and sets the
// elements to the first eight powers of 2 and then prints the values. Use a for
// loop to set the values, and, for variety, use a do while loop to display the
// values.
#include <stdio.h>

int main(void)
{
    int power_of_2[8];
    int power = 1;
    int i = 0;
    for (int i = 0; i < 8; i++)
    {
        power *= 2;
        power_of_2[i] = power;
    }
    // printf("i: %d\n", i);
    do
    {
        printf("2 '%d power: %d\n", i + 1, power_of_2[i]);
        i ++;
    } while (i < 8);

    return 0;
}