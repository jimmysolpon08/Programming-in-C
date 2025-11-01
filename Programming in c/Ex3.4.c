
/* Expeeriment 3.4
⁠WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
*/
#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int x1, x2, x3, y1, y2, y3;
    int area;
    printf("Entre the value of x1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Entre the value of x2 and y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Entre the value of x3 and y3: ");
    scanf("%d %d", &x3, &y3);
    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
    if (area = 0)
        printf("The poiints are collinear");
    else
        printf("The points are not collinear");

    return 0;
}
