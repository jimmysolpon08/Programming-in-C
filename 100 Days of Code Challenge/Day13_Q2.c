/*
Day 13.2
---------------------------------------------------------------
Write a program to print numbers from 1 to n.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
