#include <stdio.h>

int main(void) {
    int day, mon, year, earliest_day, earliest_mon, earliest_year, earlier;
    earlier = 0;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &mon, &year);
    earliest_day = day;
    earliest_mon = mon;
    earliest_year = year;
    while((day > 0) || (mon > 0) || (year > 0)) {
       
        if (year < earliest_year) {
            earlier = 1;
        } else if (year == earliest_year) {
            if (mon < earliest_mon) {
                earlier = 1;
            } else if (mon == earliest_mon) {
                if (day < earliest_day) {
                    earlier = 1;
                } 
            }
        }

        if (earlier) {
            earliest_day = day;
            earliest_mon = mon;
            earliest_year = year;
        }
        printf("Enter date (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &day, &mon, &year);

    }
    printf("%02d/%02d/%02d is the earliest date\n", earliest_day, earliest_mon, earliest_year);
}
