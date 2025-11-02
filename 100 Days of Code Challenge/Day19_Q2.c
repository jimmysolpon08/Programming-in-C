/*-----------------------------------------------------------
Day 19.2
Topic: Loops without Arrays/Strings
Description: Write a program to find the sum of digits of a number.
-----------------------------------------------------------*/

#include<stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of digits
    while (n != 0) 
    {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
