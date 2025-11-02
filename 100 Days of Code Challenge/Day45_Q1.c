/*
Day 45.1 (Strings)
----------------------------------------------------------------------
Topic: Count frequency of a given character in a string
Description: This program takes a string and a character as input 
and counts how many times the given character appears in the string.
----------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Count frequency of the given character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", ch, count);
    return 0;
}
