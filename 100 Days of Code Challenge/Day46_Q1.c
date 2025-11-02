/*
Day 46.1 (Strings)
-----------------------------------------------
Topic: Remove all vowels from a string  
Description: This program takes a string as input and removes 
all the vowels (both uppercase and lowercase) from it, 
displaying only the remaining characters.
-----------------------------------------------
*/

#include <stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels from the string
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i]; // Keep non-vowel characters
        }
    }

    str[j] = '\0'; // Null-terminate the modified string

    printf("String after removing vowels: %s\n", str);
    return 0;
}
