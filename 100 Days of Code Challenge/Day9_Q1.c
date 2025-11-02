/*
Day 9.1
---------------------------------------------------------------
Write a program to find the roots of a quadratic equation and categorize them.
---------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b, c;
    float d, root1, root2, real, imaginary;

    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = root2 = -b / (2.0 * a);
        printf("Roots are real and same.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else
    {
        real = -b / (2.0 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", real, imaginary, real, imaginary);
    }

    return 0;
}
