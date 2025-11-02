/*
Day 41.1 (Strings)
---------------------------------------------------------------
Count characters in a string without using built-in length functions.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    while (str[count] != '\0') {
        count++;
    }

    // Remove newline character from fgets()
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}
