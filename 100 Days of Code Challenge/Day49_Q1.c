/*
Day 49.1 (Strings)
-----------------------------------------------
Topic: Print the initials of a name  
Description: This program takes a full name as input 
and prints the initials of each word in the name.
-----------------------------------------------
*/

#include <stdio.h>
int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char name[100];
    int i;

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);  // safer alternative to gets()

    printf("Initials: %c.", name[0]);

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
    }

    printf("\n");
    return 0;
}
