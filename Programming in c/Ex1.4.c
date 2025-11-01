
/* Experiment 1.4 
⁠Write a C program to perform four arithmetic operations on two variables. */

#include <stdio.h>
int main()
{
    int a, b;
    int sum, di�, prod;
    float div;
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a + b;
    di� = a - b;
    prod = a * b;
    if (b != 0)
    {
        div = (float)a / b;
    }
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", a, b, sum);
    printf("Subtraction: %d - %d = %d\n", a, b, di�);
    printf("Multiplication: %d * %d = %d\n", a, b, prod);
    if (b != 0)
        printf("Division: %d / %d = %.2f\n", a, b, div);
    else
        printf("Division: Not possible (denominator is 0)\n");
    return 0;
}
