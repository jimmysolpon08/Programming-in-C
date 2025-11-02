/*
Day 8.1 (Conditional Statements)
---------------------------------------------------------------
Write a program to input a character and check whether it is an 
uppercase alphabet, lowercase alphabet, digit, or special character.
---------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // added space before %c to handle newline input

    if (ch >= 'A' && ch <= 'Z')   // A = 65, Z = 90 in ASCII
    {
        printf("The entered character is an uppercase alphabet.\n");
    }
    else if (ch >= 'a' && ch <= 'z')   // a = 97, z = 122 in ASCII
    {
        printf("The entered character is a lowercase alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9')   // 0 = 48, 9 = 57 in ASCII
    {
        printf("The entered character is a digit.\n");
    }
    else
    {
        printf("The entered character is a special character.\n");
    }

    return 0;
}
