/*
Day 8.2 (Conditional Statements)
---------------------------------------------------------------
Write a program to input three numbers and find the largest among them using if–else.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("The largest number is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The largest number is %d\n", b);
    }
    else
    {
        printf("The largest number is %d\n", c);
    }

    return 0;
}
