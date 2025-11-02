/*
Experiment 5.3
---------------------------------------------------------------
Declare variables within different code blocks (enclosed by
curly braces) and test their accessibility within and outside
those blocks.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a = 5; // Declared in main block
    printf("a = %d\n", a);

    {
        int b = 10; // Declared in inner block
        printf("Inside inner block: a = %d, b = %d\n", a, b);
    }

    // printf("Outside inner block: b = %d\n", b); // Not accessible

    {
        int c = 15; // Declared in another inner block
        printf("Inside another block: a = %d, c = %d\n", a, c);
    }

    // printf("Outside another block: c = %d\n", c); // Not accessible

    return 0;
}



