#include <stdio.h>
struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time split_time(long total_seconds) {
  struct time t;
  t.hours = total_seconds / (60*60);
  total_seconds %= (60*60);
  t.minutes = total_seconds / 60;
  t.seconds = total_seconds % 60;
  return t;
}

int main(void)
{
  int s;

  printf("Enter seconds since midnight: ");
  scanf("%d", &s);

  struct time t = split_time(s);

  printf("The time is %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}
