/*
Experiment 6.3
---------------------------------------------------------------
WAP to search an element in an array using linear search.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, key, i, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element %d found at position %d.\n", key, i + 1);
    else
        printf("Element %d not found.\n", key);

    return 0;
}

