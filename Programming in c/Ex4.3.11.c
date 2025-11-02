/* Experiment 4.3.11
   Write a C program to print the following pattern:

   5
   45
   345
   2345
   12345
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int rows = 5;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j <= rows; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
