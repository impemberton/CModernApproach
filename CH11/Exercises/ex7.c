#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void) {
    int day_of_year, year, month, day;

    printf("Enter a year:");
    scanf("%d", &year);
    printf("Enter a day out of 366:");
    scanf("%d", &day_of_year);

    split_date(day_of_year, year, &month, &day);
    printf("The date is %02d/%02d/%04d\n", day, month, year);
}

void split_date(int day_of_year, int year, int *month, int *day) {
    int days_in_month[12] = {31, year % 4 == 0 ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int m = 0; m < 12; m++) {
        if (day_of_year > days_in_month[m]) {
            day_of_year -= days_in_month[m];
        } else {
            *month = m + 1;
            *day = day_of_year;
            break;
        }
    }
}


