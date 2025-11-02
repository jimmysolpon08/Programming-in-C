/* Experiment 4.3.13
   Write a C program to print the following pattern:

   54321
   5432
   543
   54
   5
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
