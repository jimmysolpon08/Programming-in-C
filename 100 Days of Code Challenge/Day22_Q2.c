/*
Day 22.2
---------------------------------------------------------------
Write a program to find the sum of the series:
1 + 3/4 + 5/6 + 7/8 + … up to n terms.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (float)(2 * i - 1) / (2 * i);
    }

    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0;
}
