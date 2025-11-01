/* Experiment 1.3 
⁠Write a C program to add two numbers and take a number from the user.*/
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}
