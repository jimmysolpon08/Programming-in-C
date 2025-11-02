/*
Day 14.2
---------------------------------------------------------------
Write a program to print the product of even numbers from 1 to n.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            product = product * i;
        }
    }

    printf("The product of even numbers from 1 to %d is: %d\n", n, product);

    return 0;
}

