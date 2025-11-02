#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n = 5;
    int i, j, space;

    // Upper half
    for (i = 1; i <= n; i++) {
        for (space = n; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
