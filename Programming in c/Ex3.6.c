// Experiment 3.6: WAP using ternary operator
// The user should input the length and breadth of rectangles.
// Find which rectangle has the highest perimeter.
// Minimum number of rectangles should be three.

#include <stdio.h>

int main()
{
    int n, i;
    float length, breadth, perimeter;
    float maxPerimeter = 0;
    int maxIndex = 0;

    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter the number of rectangles (minimum 3): ");
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Please enter at least 3 rectangles.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("Enter length and breadth of rectangle %d: ", i);
        scanf("%f %f", &length, &breadth);

        perimeter = 2 * (length + breadth);

        // Use ternary operator to update max values
        maxIndex = (perimeter > maxPerimeter) ? i : maxIndex;
        maxPerimeter = (perimeter > maxPerimeter) ? perimeter : maxPerimeter;
    }

    printf("\nThe rectangle with the highest perimeter is rectangle %d with perimeter %.2f\n",
           maxIndex, maxPerimeter);

    return 0;
}
