/*
Day 46.2 (Strings)
-----------------------------------------------
Topic: Find the first repeating lowercase alphabet in a string  
Description: This program scans a string and identifies the first 
lowercase alphabet character that repeats. If no such character 
exists, it displays an appropriate message.
-----------------------------------------------
*/

#include <stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100];
    int freq[26] = {0}; // Frequency array for lowercase letters
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the first repeating lowercase alphabet
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
