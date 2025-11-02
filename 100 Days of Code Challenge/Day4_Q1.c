/*
Day 4
---------------------------------------------------------------
Write a program to swap two numbers without using a 
third variable.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num1 = 0, num2 = 0;

    printf("Enter num1 and num2: ");
    scanf("%d%d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The swapped numbers are: %d %d\n", num1, num2);

    return 0;
}

