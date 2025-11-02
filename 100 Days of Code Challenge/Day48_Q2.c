/*
Day 48.2 (Strings)
-----------------------------------------------
Topic: Reverse each word in a sentence without changing the word order  
Description: This program reverses each individual word in a sentence 
while maintaining the original word order.
-----------------------------------------------
*/

#include <stdio.h>
int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char sentence[200];
    int i, start, end;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // safer input than gets()

    i = 0;
    while (sentence[i] != '\0') {
        while (sentence[i] == ' ' && sentence[i] != '\0') i++;
        start = i;
        while (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') i++;
        end = i - 1;

        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }
    }

    printf("Output: %s\n", sentence);
    return 0;
}
