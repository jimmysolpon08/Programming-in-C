/*
Day 6.2
---------------------------------------------------------------
(Conditional Statements)
Write a program to input an integer and check whether it is positive, 
negative or zero using nested if–else.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The entered number is positive.\n");
    }
    else if (num < 0)
    {
        printf("The entered number is negative.\n");
    }
    else
    {
        printf("The entered number is zero.\n");
    }

    return 0;
}
