/*-----------------------------------------------------------
Day 20.1
Topic: Loops without Arrays/Strings
Description: Write a program to find the product of odd digits of a number.
-----------------------------------------------------------*/

#include<stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, digit, product = 1, odd = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 != 0)
        {
            product = product * digit;
            odd = 1;
        }
        n = n / 10;
    }

    printf("The product of odd digits of the number is: %d\n", odd ? product : 0);
    return 0;
}
