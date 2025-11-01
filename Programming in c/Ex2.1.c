/* Experiment 2.1
WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.*/
#include <stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int length, breadth;
    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf(" The area of this rectangle is %d ", length * breadth);
    return 0;
}
