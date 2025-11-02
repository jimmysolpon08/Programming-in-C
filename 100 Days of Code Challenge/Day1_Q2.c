/*
Day 1.2
---------------------------------------------------------------
Write a program to input two numbers and display their 
sum, difference, product, and quotient.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num1, num2;
    int sum, difference, product;
    float quotient; 

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The difference of %d and %d is: %d\n", num1, num2, difference);
    printf("The product of %d and %d is: %d\n", num1, num2, product);
    printf("The quotient of %d and %d is: %.2f\n", num1, num2, quotient);

    return 0;
}
