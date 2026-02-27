#include <stdio.h>

struct flight {
  int departure_time;
  int arrival_time;
};

int main(void) {
  struct flight flights[] = {
    {  8*60,       10*60 + 16 },
    {  9*60 + 43,  11*60 + 52 },
    { 11*60 + 19,  13*60 + 31 },
    { 12*60 + 47,  15*60      },
    { 14*60,       16*60 + 8  },
    { 15*60 + 45,  17*60 + 55 },
    { 19*60,       21*60 + 20 },
    { 21*60,       23*60 + 58 }
  };
  int  time, hour, min, num_flights = sizeof(flights) / sizeof(flights[0]);

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &min);

  time = hour * 60 + min;
  for (int i = 0; i < num_flights; i++)
    if (time < flights[i].departure_time) {
      printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d a.m.\n", 
               flights[i].departure_time / 60, flights[i].departure_time % 60, 
               flights[i].arrival_time / 60, flights[i].arrival_time % 60
      );
      return 0;
    }
  printf("Closest departure time is tomorrow at %02d:%02d a.m., arriving at %02d:%02d a.m.\n", 
     flights[0].departure_time / 60, flights[0].departure_time % 60, 
     flights[0].arrival_time / 60, flights[0].arrival_time % 60
  );
}
