/*
Day 49.2 (Strings)
-----------------------------------------------
Topic: Print initials with surname in full  
Description: This program takes a full name as input, 
prints the initials of the first and middle names, 
and displays the surname in full.
-----------------------------------------------
*/

#include <stdio.h>
int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char name[100];
    int i, lastSpace = -1;

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);  // safer than gets()

    // Find the index of the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print the first initial
    printf("%c.", name[0]);

    // Print initials for middle names
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i != lastSpace && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
    }

    // Print surname in full
    printf(" ");
    for (i = lastSpace + 1; name[i] != '\0'; i++) {
        if (name[i] != '\n')
            printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
