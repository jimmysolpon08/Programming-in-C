/* Experiment 4.3.6
   Write a C program to print the following pattern:

   54321
   4321
   321
   21
   1
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int rows = 5;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
