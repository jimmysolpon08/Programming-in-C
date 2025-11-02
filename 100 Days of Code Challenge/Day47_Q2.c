/*
Day 47.2 (Strings)
-----------------------------------------------
Topic: Find the longest word in a sentence  
Description: This program reads a sentence and determines the 
longest word along with its length using string tokenization.
-----------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char sentence[MAX];
    char longestWord[MAX] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *token = strtok(sentence, " \n");
    while (token != NULL) {
        int length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \n");
    }

    printf("The longest word is: %s\n", longestWord);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}
