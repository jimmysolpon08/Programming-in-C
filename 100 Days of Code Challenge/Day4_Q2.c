/*
Day 4.2
---------------------------------------------------------------
Write a program to find and display the sum of 
the first n natural numbers.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers is = %d\n", num1, sum);

    return 0;
}

