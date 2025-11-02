/*
Day 41.2 (Strings)
---------------------------------------------------------------
Print each character of a string on a new line.
---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input method

    printf("Characters in the string:\n");

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            break; // Stop printing if newline is encountered
        }
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
