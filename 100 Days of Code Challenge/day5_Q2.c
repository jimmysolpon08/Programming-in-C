/*
Day 5.2 (User Inputs, Operations & Output)
---------------------------------------------------------------
Write a program to input time in seconds and convert it to 
hours:minutes:seconds format.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int seconds, hours, minutes, rsec; // rsec = remaining seconds

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    rsec = seconds % 3600;
    minutes = rsec / 60;
    rsec = rsec % 60;

    printf("Time in hours:minutes:seconds = %d:%d:%d\n", hours, minutes, rsec);

    return 0;
}
