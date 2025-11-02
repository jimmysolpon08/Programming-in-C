/*
Day 2.1
---------------------------------------------------------------
(User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a 
rectangle given its length and breadth.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int length, breadth;
    int area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area of the rectangle is: %d\n", area);
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
