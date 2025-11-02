/*
Day 12.1
---------------------------------------------------------------
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days late: ₹6/day
More than 30 days: Membership Cancelled.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int late_days;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5) {
        fine = late_days * 2;
    } 
    else if (late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4);
    } 
    else if (late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
    } 
    else {
        printf("Membership Cancelled.\n");
        return 0;
    }

    printf("The total fine is: ₹%d\n", fine);
    return 0;
}
