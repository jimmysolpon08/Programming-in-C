/*
Day 25.1 (Nested Loops without Arrays/Strings)
---------------------------------------------------------------
 Write a program to print the following pattern:
5
45
345
2345
12345
---------------------------------------------------------------
*/

#include <stdio.h>

int main()  
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
