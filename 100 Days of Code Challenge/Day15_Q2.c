/*
Day 15.2
---------------------------------------------------------------
Write a program to reverse a given number.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, renumber = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        renumber = renumber * 10 + digit;
        n /= 10;
    }

    printf("Reversed Number: %d\n", renumber);

    return 0;
}
