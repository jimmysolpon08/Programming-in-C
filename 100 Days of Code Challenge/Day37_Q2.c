/*
Day 37.2 (2D Arrays)
---------------------------------------------------------------
Find the transpose of a matrix.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int A[100][100], transpose[100][100];
    int m, n;

    printf("Enter the order of matrix A (rows, columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Compute the transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    printf("\nTranspose of the Matrix (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
