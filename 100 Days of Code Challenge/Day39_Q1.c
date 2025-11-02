/*
Day 39.1 (2D Arrays)
---------------------------------------------------------------
Check if the elements on the diagonal of a matrix are distinct.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int matrix[10][10], distinct[10];
    int n, i, j, k = 0, isDistinct = 1;

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract diagonal elements
    for (i = 0; i < n; i++) {
        distinct[k++] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < k; i++) {
        for (j = i + 1; j < k; j++) {
            if (distinct[i] == distinct[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");

    return 0;
}
