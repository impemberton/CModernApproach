#include <stdio.h>

int day_of_year(int day, int month, int year) {
    int months[12] = {31, year % 4 == 0 ? 29: 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < month - 1; i++) {
        day += months[i];
    }
    return day;
}

int main(void) {
    int day, month, year;
    printf("Please enter a date (dd/mm/yyyy): ");
    scanf("%2d/%2d/%4d", &day, &month, &year);
    printf("Day of the year: %d\n", day_of_year(day,month,year));
}