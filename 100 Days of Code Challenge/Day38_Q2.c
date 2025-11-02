/*
Day 38.2 (2D Arrays)
---------------------------------------------------------------
Check if a matrix is symmetric.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int A[100][100], transpose[100][100];
    int m, n, isSymmetric = 1;

    printf("Enter the order of matrix A (rows, columns): ");
    scanf("%d %d", &m, &n);

    if (m != n) {
        printf("Matrix is not symmetric as it is not square.\n");
        return 0;
    }

    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Compute transpose of the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    // Check if matrix is symmetric
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
