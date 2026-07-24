/*A company stores the duration of a project in terms of total days. Write a program to convert
 the given number of days into years, months, weeks, and remaining days.*/


#include <stdio.h>

int main() {
    int totalDays;
    int years, months, weeks, days;

    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    totalDays = totalDays % 30;

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("Years = %d\n", years);
    printf("Months = %d\n", months);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", days);

    return 0;
}
