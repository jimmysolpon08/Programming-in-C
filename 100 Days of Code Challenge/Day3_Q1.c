/*
Day 3.1
---------------------------------------------------------------
(User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num1 = 0, num2 = 0, num3 = 0;  // num3 is the third variable used for swapping

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("The swapped numbers are: %d %d\n", num1, num2);

    return 0;
}
