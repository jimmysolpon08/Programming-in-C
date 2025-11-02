/* Experiment 4.3.12
   Write a C program to print the following pattern:

   12345
   2345
   345
   45
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
        for (int j = i; j <= rows; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
