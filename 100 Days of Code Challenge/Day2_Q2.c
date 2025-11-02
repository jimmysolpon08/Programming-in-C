/*
Day 2.2
---------------------------------------------------------------
(User Inputs, Operations & Output)
Write a program to calculate the area and circumference of 
a circle given its radius.
---------------------------------------------------------------
*/

#include <stdio.h>
#define PI 3.14159  

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    float radius;
    float area, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius; 

    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}
