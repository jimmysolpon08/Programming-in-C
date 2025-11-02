/*
Day 28.2 (Arrays (1D))
---------------------------------------------------------------
Read and print elements of a one-dimensional array.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n
    
    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Print the elements of the array
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
