/*
Day 16.2
---------------------------------------------------------------
Write a program to check if a number is a palindrome.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()  
{  
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, originalNumber, reversedNumber = 0, remainder;  

    printf("Enter an integer: ");  
    scanf("%d", &n);  

    originalNumber = n;  

    // Reverse the number
    while (n != 0)   
    {  
        remainder = n % 10;  
        reversedNumber = reversedNumber * 10 + remainder;  
        n /= 10;  
    }  

    // Check if the number is a palindrome
    if (originalNumber == reversedNumber)  
        printf("%d is a palindrome.\n", originalNumber);  
    else  
        printf("%d is not a palindrome.\n", originalNumber);  

    return 0;  
}
