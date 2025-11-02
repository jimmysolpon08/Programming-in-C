/*
Day 36.2 (2D Arrays)
---------------------------------------------------------------
Find the sum of all elements in a matrix.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int A[100][100];
    int m, n, sum = 0;

    printf("Enter the order of matrix A (rows, columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            sum += A[i][j];
        }
    }

    printf("\nSum of all elements of the matrix = %d\n", sum);

    return 0;
}
