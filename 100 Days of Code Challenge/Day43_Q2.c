/*
Day 43.2 (Strings)
-----------------------------------------------
Topic: Check if a string is a palindrome
Description: This program takes a string as input and checks 
whether it reads the same backward as forward (palindrome).
-----------------------------------------------
*/

#include <stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length of the string
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
