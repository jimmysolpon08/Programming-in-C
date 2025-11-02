/*
Day 5.1
---------------------------------------------------------------
Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest 
for given principal, rate, and time.
---------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float principal, rate, time, si, ci, amount;

    printf("Enter principal, rate, and time: ");
    scanf("%f%f%f", &principal, &rate, &time);

    si = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
