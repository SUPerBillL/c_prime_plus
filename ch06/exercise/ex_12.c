// C Primer Plus
// Chapter 6 Exercise 12:

// Consider these two infinite series:
// 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
// 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
// Write a program that evaluates running totals of these two series up to some
// limit of number of terms. Hint: –1 times itself an odd number of times is –1,
// and –1 times itself an even number of times is 1. Have the user enter the limit
// interactively; let a zero or negative value terminate input. Look at the running
// totals after 100 terms, 1000 terms, 10,000 terms. Does either series appear to
// be converging to some value?
#include <stdio.h>
#define DIVIDEND 1.0

float partial_fraction(float limit);

int main(void)
{
    float user_input;
    
    printf("Input Limit: ");
    scanf("%f", &user_input);
    while (user_input > 0)
    {
        partial_fraction(user_input);
        printf("Input Next Limit: ");
        scanf("%f", &user_input);
    }
    printf("End!\n");

    return 0;
}

float partial_fraction(float limit)
{
    float sum = .0;
    float on_sign_sum = .0;
    float sign = 1.0;
    printf("Limit: %f\n", limit);
    for (float divisor = 1.0; divisor <= limit; divisor++)
    {
        sum += DIVIDEND / divisor;
        on_sign_sum += (DIVIDEND / divisor) * sign;
        sign = -sign;
        
    }
    printf("Sum in the function: %f\n", sum);
    printf("On Sign Sum in the function: %f\n", on_sign_sum);

    return sum;
}
