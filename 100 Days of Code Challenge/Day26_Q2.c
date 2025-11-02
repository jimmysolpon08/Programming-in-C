/*
Day 26.2 (Nested Loops without Arrays/Strings)
---------------------------------------------------------------
 Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    // Increasing pattern
    for (int i = 1; i <= 5; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    // Decreasing pattern
    for (int i = 3; i >= 1; i -= 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
