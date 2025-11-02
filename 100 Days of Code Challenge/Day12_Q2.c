/*
Day 12.2
---------------------------------------------------------------
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above 300 units at ₹12/unit
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int units;
    float billamount = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        billamount = units * 5;
    } 
    else if (units <= 200) {
        billamount = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        billamount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        billamount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("The total electricity bill is: ₹%.2f\n", billamount);
    return 0;
}
