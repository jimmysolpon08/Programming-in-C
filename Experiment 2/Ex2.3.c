/* Experiment 2.3
 WAP to calculate Compound interest (CI = P*(1+R/100)^T */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    float P, R, T, CI;

    printf("Enter the values of principle, rate, time");
    scanf("%f%f%f", &P, &R, &T);
    float t1 = (1 + (R / 100));
    float t2 = pow(t1, T);
    CI = (P * t2) - P;

    printf("the compound interst is %f", CI);
    return 0;
}