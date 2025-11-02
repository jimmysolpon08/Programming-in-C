/*
Day 43.1 (Strings)
-----------------------------------------------
Topic: Reverse a string
Description: This program reverses a string entered by the user 
without using any built-in string functions.
-----------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length of the string
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
