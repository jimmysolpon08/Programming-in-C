/*-----------------------------------------------------------
Day 19.1
Topic: Loops without Arrays/Strings
Description: Write a program to find the LCM of two numbers.
-----------------------------------------------------------*/

#include<stdio.h>
int main()  
{  
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b, lcm, max;  

    printf("Enter two positive integers: ");  
    scanf("%d %d", &a, &b);  

    // Find the maximum of the two numbers
    max = (a > b) ? a : b;  
    lcm = max;  

    // Loop until we find the LCM
    while (1)  
    {  
        if (lcm % a == 0 && lcm % b == 0)  
        {  
            break;  
        }  
        lcm++;  
    }  

    printf("LCM of %d and %d is %d\n", a, b, lcm);  

    return 0;  
}
