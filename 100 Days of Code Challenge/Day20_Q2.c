/*-----------------------------------------------------------
Day 20.2
Topic: Loops without Arrays/Strings
Description: Write a program to find the 1’s complement of a binary number and print it.
-----------------------------------------------------------*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num, digit, result = 0, place = 1, digits = 0, temp;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Find 1’s complement
    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0)
            result += 1 * place;
        else
            result += 0 * place;
        temp /= 10;
        place *= 10;
    }

    printf("1’s Complement: %0*d\n", digits, result);

    return 0;
}
