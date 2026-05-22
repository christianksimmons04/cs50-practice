// Written by Christian Simmons
// Calculates tip and total bill

#include <stdio.h>

int main(void)
{
    float cost;      // Total cost of the meal
    int tip;         // Tip percentage (e.g. 20 for 20%)

    printf("How much did you pay? $");
    scanf("%f", &cost); // Float variable that way we can get decimals/change

    printf("How much of a tip do you want to give (percentage)? ");
    scanf("%d", &tip); // Decimal integer for the tip

    float tip_amount = cost * (tip / 100.0); // Simple equation to get the actual tip
    float total = cost + tip_amount; // Just a convenient extra so you make sure you know what you paid

    printf("\nTip amount: $%.2f\n", tip_amount); // Tells you the tip amount
    printf("Total bill: $%.2f\n", total); // Tells you the total

    return 0; // End
}
