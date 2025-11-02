/* Experiment 4.3.1
   Write a C program to print the following pattern:

   1
   22
   333
   4444
   55555
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
