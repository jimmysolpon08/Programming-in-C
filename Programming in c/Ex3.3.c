
/* Experiment 3.3
WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).
*/
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    float weight, height, bmi;
    printf("Enter the weight in kgs ");
    scanf("%f", &weight);
    printf("Enter the height in mts ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("The BMI index is %f\n", bmi);
    if (bmi < 15)
        printf("Starvation");
    else if (bmi >= 15.1 && bmi < 17.5)
        printf("Anorexic");
    else if (bmi >= 17.6 && bmi < 18.5)
        printf("Underweight");
    else if (bmi >= 18.6 && bmi < 24.9)
        printf("Ideal");
    else if (bmi >= 25 && bmi < 25.9)
        printf("Overweight");
    else if (bmi >= 30 && bmi < 30.9)
        printf("Obese");
    else
        printf("Morbidly Obese");
    return 0;
}
