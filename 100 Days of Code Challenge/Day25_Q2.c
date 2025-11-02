/*
Day 25.2 (Nested Loops without Arrays/Strings)
---------------------------------------------------------------
Write a program to print the following pattern:
*****
****
***
**
*
---------------------------------------------------------------
*/

#include <stdio.h>

int main()  
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
