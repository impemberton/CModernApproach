#include <stdio.h>

int main(void) {
    int day1, day2, mon1, mon2, year1, year2, earlier, same;
    same = 0;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day1, &mon1, &year1);
    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day2, &mon2, &year2);

    if (year1 < year2) {
        earlier = 1;
    } else if (year2 < year1) {
        earlier = 0;
    } else {
        if (mon1 < mon2) {
            earlier = 1;
        } else if (mon2 < mon1) {
            earlier = 0;
        } else {
            if (day1 < day2) {
                earlier = 1;
            } else if (day2 < day1) {
                earlier = 0;
            } else {
            same = 1;
            }
        }
    }

    if (!same) {
        if (earlier) {
            printf("%02d/%02d/%04d is earlier than %02d/%02d/%04d\n", day1,mon1,year1,day2,mon2,year2);
        } else {
            printf("%02d/%02d/%04d is earlier than %02d/%02d/%04d\n", day2,mon2,year2,day1,mon1,year1);
        }
    } else {
        printf("The two dates are the same\n");
    }
}
