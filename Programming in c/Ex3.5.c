/* Experiment 3.5:
 According to the Gregorian calendar, it was Monday on 01/01/01. If any year is input through the keyboard, write a program to find
 out what is the day on 1st January of that year.*/

#include <stdio.h>

int main()
{
    int year, i, days = 0, dayOfWeek;

    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate total number of days from year 1 to (year - 1)
    for (i = 1; i < year; i++)
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366;
        else
            days += 365;
    }

    // Find day of week (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)
    dayOfWeek = days % 7;

    printf("01/01/%d was a ", year);
    switch (dayOfWeek)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    }

    printf("\n");
    return 0;
}
