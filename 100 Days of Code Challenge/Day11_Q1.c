/*
Day 11.1
---------------------------------------------------------------
Write a program to find profit or loss percentage given cost price and selling price.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float cp, sp, profit, loss;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit Percentage = %.2f%%\n", (profit / cp) * 100);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("Loss Percentage = %.2f%%\n", (loss / cp) * 100);
    }
    else
    {
        printf("No profit, no loss.\n");
    }

    return 0;
}
