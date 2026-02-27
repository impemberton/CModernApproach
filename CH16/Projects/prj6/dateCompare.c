#include <stdio.h>
#include <stdbool.h>

int main(void) {
  struct date {
    int day;
    int month;
    int year;
  } date1, date2;
  bool earlier, same = false;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    if (date1.year < date2.year) {
        earlier = 1;
    } else if (date2.year < date1.year) {
        earlier = 0;
    } else {
        if (date1.month < date2.month) {
            earlier = 1;
        } else if (date2.month < date1.month) {
            earlier = 0;
        } else {
            if (date1.day < date2.day) {
                earlier = 1;
            } else if (date2.day < date1.day) {
                earlier = 0;
            } else {
            same = 1;
            }
        }
    }

    if (!same) {
        if (earlier) {
            printf("%02d/%02d/%04d is earlier than %02d/%02d/%04d\n", date1.day,date1.month,date1.year,date2.day,date2.month,date2.year);
        } else {
            printf("%02d/%02d/%04d is earlier than %02d/%02d/%04d\n", date2.day,date2.month,date2.year,date1.day,date1.month,date1.year);
        }
    } else {
        printf("The two dates are the same\n");
    }
}
