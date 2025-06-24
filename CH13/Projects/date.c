#include <stdio.h>

int main(void) {
  char months[12][10] = {"January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December"};
  int day, month, year;
  printf("Enter a date (dd/mm/yyyy): ");
  scanf("%2d/%2d/%4d", &day, &month, &year);
  printf("You entered the date %s %d, %d\n", months[month - 1], day, year);
}
