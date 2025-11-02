/*
Day 7.2  (Conditional Statements)
---------------------------------------------------------------
Write a program to input a character and check whether it is a 
vowel or consonant using if–else.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // added & and space before %c to handle newline input

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The entered character is a vowel.\n");
    }
    else
    {
        printf("The entered character is a consonant.\n");
    }

    return 0;
}
