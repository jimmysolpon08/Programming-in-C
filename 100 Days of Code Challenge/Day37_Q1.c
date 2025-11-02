/*
Day 37.1 (2D Arrays)
---------------------------------------------------------------
Find the sum of each row of a matrix and store it in an array.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int A[100][100], rowSum[100];
    int m, n;

    printf("Enter the order of matrix A (rows, columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (int i = 0; i < m; i++) {
        rowSum[i] = 0; // Initialize sum for each row
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            rowSum[i] += A[i][j]; // Add element to respective row sum
        }
    }

    printf("\nSum of each row of the matrix:\n");
    for (int i = 0; i < m; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
