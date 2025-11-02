/*
Experiment 6.1
---------------------------------------------------------------
WAP to read a list of integers and store it in a single dimensional
array. Write a C program to print the second largest integer in a
list of integers.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second largest doesn't exist.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0], second = -2147483648;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("Second largest doesn't exist (all elements are equal).\n");
    else
        printf("Second largest number = %d\n", second);

    return 0;
}


