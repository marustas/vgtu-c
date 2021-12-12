/*
Daphne invests $100 at 10% simple interest. 
(That is, every year, the investment earns an interest equal to 10% of the original investment.) 
Deirdre invests $100 at 5% interest compounded annually. 
(That is, interest is 5% of the current balance, including previous addition of interest.) 
Write a program that finds how many years it takes for the value of Deirdre’s investment to exceed the value of Daphne’s investment. 
Also show the two values at that time.
*/
#include <stdio.h>

int main(void)
{
    const float DEIRDE_INVESTMENT = 100;
    const float DAPHNE_INVESTMENT = 100;
    const float DEIRDE_INTEREST = 0.05;
    const float DAPHNE_INTEREST = 0.1;

    int years = 0;
    float daphne_balance = DAPHNE_INVESTMENT;
    float deirdre_balance = DEIRDE_INVESTMENT;

    while (deirdre_balance <= daphne_balance)
    {
        deirdre_balance *= 1.0f + DEIRDE_INTEREST;

        daphne_balance += DAPHNE_INVESTMENT * DAPHNE_INTEREST;
        years++;
    }
    printf("The value of Deirdre's investment will exceed the value of Daphne's investment in %d years.\nDaphne's investment is worth $%.2f and Deirdre's investment is worth $%.2f.\n", years, daphne_balance, deirdre_balance);

    return 0;
}