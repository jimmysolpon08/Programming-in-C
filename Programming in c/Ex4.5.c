/*
Experiment 4.5
---------------------------------------------------------------
Ramanujan Number is the smallest number that can be expressed as 
the sum of two cubes in two different ways. 
Write a program to print all such numbers up to a reasonable limit.

Example:
1729 = 12^3 + 1^3 = 10^3 + 9^3
---------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Ramanujan Numbers up to limit 80000:\n\n");

    int a, b, c, d;
    int limit = 80000;

    for (a = 1; a <= 50; a++)
    {
        for (b = a; b <= 50; b++)
        {
            for (c = a + 1; c <= 50; c++)
            {
                for (d = c; d <= 50; d++)
                {
                    int sum1 = pow(a, 3) + pow(b, 3);
                    int sum2 = pow(c, 3) + pow(d, 3);
                    if (sum1 == sum2 && sum1 <= limit)
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

