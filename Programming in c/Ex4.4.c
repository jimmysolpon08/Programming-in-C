/*
Experiment 4.4
---------------------------------------------------------------
The population of a town is 100000. The population has increased 
steadily at the rate of 10% per year for the last 10 years. 
Write a program to determine the population at the end of each 
year in the last decade.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int i;
    float population = 100000;

    for (i = 1; i <= 10; i++)
    {
        population = population + (population * 0.10);
        printf("Population of the town in year %d is: %.0f\n", i, population);
    }

    return 0;
}



