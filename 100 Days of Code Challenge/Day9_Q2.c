/*
Day 9.2
---------------------------------------------------------------
Write a program to assign grades based on a percentage input.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Grade: B+\n");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Grade: D\n");
    }
    else if (percentage >= 0 && percentage < 40)
    {
        printf("Grade: F (Fail)\n");
    }
    else
    {
        printf("Invalid percentage entered!\n");
    }

    return 0;
}
