/*
Day 50.1 (Strings)
-----------------------------------------------
Topic: Change date format (dd/mm/yyyy → dd-Mon-yyyy)
Description: This program converts a date in the format 
dd/mm/yyyy into the format dd-Mon-yyyy using a switch 
statement for month conversion.
-----------------------------------------------
*/

#include <stdio.h>
int main() {
    printf("Name: Jigmat\nSAP ID: 590021104\nCourse: Bsc CS\nBatch: B1\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char date[15], day[3], month[3], year[5];
    int i, j;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract day
    for (i = 0; i < 2; i++)
        day[i] = date[i];
    day[2] = '\0';

    // Extract month
    for (i = 3, j = 0; j < 2; i++, j++)
        month[j] = date[i];
    month[2] = '\0';

    // Extract year
    for (i = 6, j = 0; date[i] != '\0'; i++, j++)
        year[j] = date[i];
    year[j] = '\0';

    int m = (month[0] - '0') * 10 + (month[1] - '0');

    printf("%s-", day);

    switch (m) {
        case 1:  printf("Jan"); break;
        case 2:  printf("Feb"); break;
        case 3:  printf("Mar"); break;
        case 4:  printf("Apr"); break;
        case 5:  printf("May"); break;
        case 6:  printf("Jun"); break;
        case 7:  printf("Jul"); break;
        case 8:  printf("Aug"); break;
        case 9:  printf("Sep"); break;
        case 10: printf("Oct"); break;
        case 11: printf("Nov"); break;
        case 12: printf("Dec"); break;
        default: printf("Invalid"); break;
    }

    printf("-%s\n", year);

    return 0;
}
