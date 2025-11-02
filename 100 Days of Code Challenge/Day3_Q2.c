/*
Day 3.2
---------------------------------------------------------------
(User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float temp = 0, fahren = 0, num = 1.8;
    // Formula: Fahrenheit = (Celsius * 1.8) + 32

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    fahren = (temp * num) + 32;

    printf("Temperature in Fahrenheit is = %.2f\n", fahren);

    return 0;
}
