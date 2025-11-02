/*
Day 47.1 (Strings)
-----------------------------------------------
Topic: Check if two strings are anagrams of each other  
Description: This program checks whether two strings are anagrams, 
i.e., if both strings contain the same characters in any order.  
It compares character frequencies and validates equality.
-----------------------------------------------
*/

#include <stdio.h>
int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    int found;

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    // Calculate lengths
    while (str1[len1] != '\0') {
        len1++;
    }
    while (str2[len2] != '\0') {
        len2++;
    }

    // Length check
    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    // Check for anagram
    for (i = 0; i < len1; i++) {
        found = 0;
        for (j = 0; j < len2; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '0';
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
