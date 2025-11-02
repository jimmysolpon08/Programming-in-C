/* Experiment 4.3.10
   Write a C program to print the reverse numeric triangle pattern based on user input.
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
