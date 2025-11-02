/*
Experiment 6.2
---------------------------------------------------------------
WAP to find the sum and average of ‘n’ elements using an array.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    float sum = 0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}


