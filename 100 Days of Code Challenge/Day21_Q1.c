/*-----------------------------------------------------------
Day 21.1
Topic: Loops without Arrays/Strings
Description: Write a program to swap the first and last digit of a number.
-----------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = (int)(num / pow(10, digits));

    if (firstDigit == lastDigit)
    {
        printf("Number after swapping first and last digit is: %d\n", num);
    }
    else
    {
        swappedNum = (lastDigit * pow(10, digits)) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;
        printf("Number after swapping first and last digit is: %d\n", swappedNum);
    }

    return 0;
}
