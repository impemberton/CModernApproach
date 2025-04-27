#include <stdio.h>

int main(void) {
    int days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7 = Sat): ");
    scanf("%d", &start_day);

    for(int i = 1 - start_day; i <= days; i++) {
        if(i < 1) {
            printf("   ");
        } else {
            printf("%2d ", i);
        }
        if ((i + start_day - 1) % 7  == 0) {
            printf("\n");
        }
    }
    printf("\n");
}