/*
Day 50.2 (Strings)
-----------------------------------------------------
Topic: Print all substrings of a string
Description: This program prints all possible 
substrings of a given string by using nested loops.
-----------------------------------------------------
*/

#include <stdio.h>
int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    // Remove newline if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("All substrings:\n");

    for (i = 0; str[i] != '\0'; i++) {         
        for (j = i; str[j] != '\0'; j++) {     
            for (k = i; k <= j; k++) {         
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
