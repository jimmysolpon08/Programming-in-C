/*
Experiment 5.2
---------------------------------------------------------------
Declare a local variable inside a function and try to access it
outside the function. Compare this with accessing the global
variable from within the function.
---------------------------------------------------------------
*/

#include <stdio.h>

// Global variable
int globalVar = 10;

void testFunction()
{
    int localVar = 20; // Local variable
    printf("Inside function:\n");
    printf("Local variable = %d\n", localVar);
    printf("Global variable = %d\n", globalVar);
}

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    testFunction();

    printf("\nOutside function:\n");
    // printf("Local variable = %d\n", localVar); // Not accessible here
    printf("Global variable = %d\n", globalVar); // Accessible everywhere
    return 0;
}

