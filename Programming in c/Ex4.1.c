/* Experiment 4.1
   Write a C program to enter numbers till the user wants.
   At the end, it should display the count of positive, negative, and zeroes entered.*/

#include <stdio.h>

int main()
{
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int num, positive = 0, negative = 0, zero = 0;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // space before %c skips newline

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of Positive numbers: %d", positive);
    printf("\nCount of Negative numbers: %d", negative);
    printf("\nCount of Zeroes: %d\n", zero);

    return 0;
}
