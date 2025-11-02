/*
Day 14.1
---------------------------------------------------------------
Write a program to print the sum of the first n odd numbers.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum += (2 * i + 1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
