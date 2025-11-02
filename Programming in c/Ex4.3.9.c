#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n = 5;
    int i, j, k;

    // Upper half of diamond
    for (i = 1; i <= n; i++) {
        // Spaces before numbers
        for (j = i; j < n; j++)
            printf(" ");

        // Decreasing numbers
        for (j = n; j >= n - i + 1; j--)
            printf("%d", j);

        // Increasing numbers
        for (j = n - i + 2; j <= n; j++)
            printf("%d", j);

        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 1; i >= 1; i--) {
        // Spaces before numbers
        for (j = n; j > i; j--)
            printf(" ");

        // Decreasing numbers
        for (j = n; j >= n - i + 1; j--)
            printf("%d", j);

        // Increasing numbers
        for (j = n - i + 2; j <= n; j++)
            printf("%d", j);

        printf("\n");
    }

    return 0;
}
