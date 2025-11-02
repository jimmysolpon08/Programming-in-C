/*
Day 33.2 (Arrays (1D))
---------------------------------------------------------------
Insert an element in a sorted array at the appropriate position.
---------------------------------------------------------------
*/

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int arr[MAX_SIZE], n, i, j, newElement, position;

    // Input the number of elements in the array
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    // Input the elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the new element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &newElement);

    // Find the position to insert the new element
    position = n; // Default position is at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > newElement) {
            position = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (j = n; j > position; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new element at the found position
    arr[position] = newElement;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
