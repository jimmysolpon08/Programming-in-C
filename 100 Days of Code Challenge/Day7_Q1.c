/*
Day 7.1
---------------------------------------------------------------
Write a program to input a year and check whether it is a leap year 
or not using conditional statements.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int year;
    printf("Enter a year: ");
    scanf("%d", &year); // Input the year

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The entered year is a leap year.\n");
            }
            else
            {
                printf("The entered year is not a leap year.\n");
            }
        }
        else
        {
            printf("The entered year is a leap year.\n");
        }
    }
    else
    {
        printf("The entered year is not a leap year.\n");
    }

    return 0;
}
