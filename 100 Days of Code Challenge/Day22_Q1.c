/*
Day 22.1
---------------------------------------------------------------
Write a program to check if a number is a Strong number.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, num, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (num != 0)
    {
        digit = num % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == n)
    {
        printf("%d is a Strong number.\n", n);
    }
    else
    {
        printf("%d is not a Strong number.\n", n);
    }

    return 0;
}
