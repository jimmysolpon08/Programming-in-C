/*-----------------------------------------------------------
Day 18.2
Topic: Loops without Arrays/Strings
Description: Write a program to find the HCF (GCD) of two numbers.
-----------------------------------------------------------*/

#include<stdio.h>
int main()  
{  
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b, hcf, i;  

    printf("Enter two positive integers: ");  
    scanf("%d %d", &a, &b);  

    // Find the smaller of the two numbers
    int min = (a < b) ? a : b;  

    // Loop from 1 to min to find the HCF
    for (i = 1; i <= min; i++)  
    {  
        if (a % i == 0 && b % i == 0)  
        {  
            hcf = i;  
        }  
    }  

    printf("HCF of %d and %d is %d\n", a, b, hcf);  

    return 0;  
}
