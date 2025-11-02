/*
Experiment 6.5
---------------------------------------------------------------
WAP to find the sum of two matrices of order 3×3.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];
    }

    printf("Sum of two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}



