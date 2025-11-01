/* Experiment 2.2 
WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    float c, f;
    printf("Enter the temprature in celsius ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("The temprature in fahrenheit is %f", f);
    return 0;
}