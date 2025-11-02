/*
Experiment 5.1
---------------------------------------------------------------
Declare a global variable outside all functions and use it inside
various functions to understand its accessibility.
---------------------------------------------------------------
*/

#include <stdio.h>

// Function declarations
void sprvol(double r);
void sprsa(double r);
void cylvol(double h, double r);
void cylcsa(double h, double r);
void cylsa(double h, double r);

double pi = 3.1415926535; // Global variable

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a;
    double r, h;

    printf("Enter:\n"
           "1 for volume of sphere\n"
           "2 for surface area of sphere\n"
           "3 for volume of cylinder\n"
           "4 for curved surface area of cylinder\n"
           "5 for total surface area of cylinder\n"
           ": ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Enter radius: ");
        scanf("%lf", &r);
        sprvol(r);
        break;
    case 2:
        printf("Enter radius: ");
        scanf("%lf", &r);
        sprsa(r);
        break;
    case 3:
        printf("Enter radius and height: ");
        scanf("%lf %lf", &r, &h);
        cylvol(h, r);
        break;
    case 4:
        printf("Enter radius and height: ");
        scanf("%lf %lf", &r, &h);
        cylcsa(h, r);
        break;
    case 5:
        printf("Enter radius and height: ");
        scanf("%lf %lf", &r, &h);
        cylsa(h, r);
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}

void sprvol(double r)
{
    double vol;
    vol = (4.0 / 3.0) * pi * r * r * r;
    printf("Volume of sphere is: %lf\n", vol);
}

void sprsa(double r)
{
    double ar;
    ar = 4 * pi * r * r;
    printf("Surface area of sphere is: %lf\n", ar);
}

void cylvol(double h, double r)
{
    double vol;
    vol = pi * r * r * h;
    printf("Volume of cylinder is: %lf\n", vol);
}

void cylcsa(double h, double r)
{
    double ar;
    ar = 2 * pi * r * h;
    printf("Curved surface area of cylinder is: %lf\n", ar);
}

void cylsa(double h, double r)
{
    double ar;
    ar = (2 * pi * r * h) + (2 * pi * r * r);
    printf("Total surface area of cylinder is: %lf\n", ar);
}



