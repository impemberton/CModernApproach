
#include <stdio.h>
struct date {
  int day;
  int month;
  int year;
};

int day_of_year(struct date d) 
{
  int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int day = d.day;
  for (int i = 0; i < d.month - 1; i++) 
    day += days_in_month[i];
  return day;
}

int compare_dates(struct date d1, struct date d2) 
{
  if (d1.year < d2.year)
    return -1;
  else if (d1.year > d2.year)
    return 1;
  else {
    int d1_doy = day_of_year(d1), d2_doy = day_of_year(d2);
    if (d1_doy < d2_doy)
      return -1;
    else if (d1_doy > d2_doy)
      return 1;
    else 
      return 0;
  }
}

int main(void) 
{
  struct date userdate, userdate2;
  
  printf("Enter a date in the form DD/MM/YYYY: ");
  scanf("%2d/%2d/%4d", &userdate.day, &userdate.month, &userdate.year);
  int day = day_of_year(userdate);
  printf("%2d/%2d/%4d is day number %d of the year.\n", userdate.day, userdate.month, userdate.year, day);

  printf("Enter another date in the form DD/MM/YYYY: ");
  scanf("%2d/%2d/%4d", &userdate2.day, &userdate2.month, &userdate2.year);
  day = day_of_year(userdate2);
  printf("%2d/%2d/%4d is day number %d of the year.\n", userdate2.day, userdate2.month, userdate2.year, day);

  printf("%2d/%2d/%4d is ", userdate.day, userdate.month, userdate.year);

  switch(compare_dates(userdate, userdate2)) {
    case 1:
      printf("later than ");
      break;
    case 0:
      printf("the same as ");
      break;
    case -1:
      printf("earlier than ");
      break;
  }
  printf("%2d/%2d/%4d\n", userdate2.day, userdate2.month, userdate2.year);
      




}
