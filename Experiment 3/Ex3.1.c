/* Experiment 3.1
Write a C program to check whether a number is Even or ODD */

#include <stdio.h>

int main()
{

    int number;
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter the number");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}
