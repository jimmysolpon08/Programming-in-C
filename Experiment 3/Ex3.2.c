/* Experiment 3.2
Write a C program to check whether a triangle is valid or not. If valid, check if it is isosceles, equilateral, right angle, or scalene triangle */

#include <stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int a, b, c;

    printf("Enter the three sides of triangle");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
            printf("The triangle is equilateral");
        else if (a == b || b == c || c == a)
            printf("The triangle is isosceles");
        else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
            printf("The triangle is right angled");
        else
            printf("The triangle is scalene");
    }
    else
        printf("The triangle is not valid");
    return 0;
}
