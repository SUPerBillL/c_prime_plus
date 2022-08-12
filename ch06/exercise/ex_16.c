// C Primer Plus
// Chapter 6 Exercise 16:

// Daphne invests $100 at 10% simple interest. (That is, every year, the
// investment earns an interest equal to 10% of the original investment.) Deirdre
// invests $100 at 5% interest compounded annually. (That is, interest is 5% of
// the current balance, including previous addition of interest.) Write a program
// that finds how many years it takes for the value of Deirdre’s investment to
// exceed the value of Daphne’s investment. Also show the two values at that time.
#include <stdio.h>
#define PRINCIPAL 100
#define SIMPLE_INTEREST .1
#define COMPOUNDED_INTEREST .05

int main(void)
{
    int years = 1;
    float Daphne_earnings=PRINCIPAL, Deirdre_earnings=PRINCIPAL;

    do
    {
        Daphne_earnings += PRINCIPAL * SIMPLE_INTEREST;
        Deirdre_earnings *= (1 + COMPOUNDED_INTEREST);
        years ++;
    } while (Daphne_earnings > Deirdre_earnings);
    
    printf("Years:%d Later Deirdre earn larger than Daphne!\n", years);
    printf("Daphne_earnings: %f\n", Daphne_earnings);
    printf("Deirdre_earnings: %f\n", Deirdre_earnings);

    return 0;
}