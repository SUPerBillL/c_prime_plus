// C Primer Plus
// Chapter 6 Exercise 17:

// Chuckie Lucky won a million dollars (after taxes), which he places in an
// account that earns 8% a year. On the last day of each year, Chuckie
// withdraws $100,000. Write a program that finds out how many years it takes
// for Chuckie to empty his account.
#include <stdio.h>
#define MONEY 1000000
#define TAKED_MONEY_PER_YEAR 100000
#define INTEREST_RATE .08

int main(void)
{
    int years = 1;
    float account_balance = MONEY;

    do
    {
        account_balance *= 1.0f + INTEREST_RATE;
        account_balance -= TAKED_MONEY_PER_YEAR;
        // printf("account balance: %f\n", account_balance);
        years++;
    } while (account_balance > 0);

    printf("After %d years Chuckie take all of the money account_balance!\n", years);

    return 0;
}
