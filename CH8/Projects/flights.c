#include <stdio.h>

int main(void) {
    int departures[8] = {
        8*60, 
        9*60 + 43,11*60 + 19,
        12*60 + 47,
        14*60,
        15*60 + 45,
        19*60,
        21*60
    },
    arrivals[8] = {
        10*60 + 16,
        11*60 + 52,
        13*60 + 31,
        15*60,
        16*60 + 8,
        17*60 + 55,
        21*60 + 20,
        23*60 + 58
    },
    time, hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time = hour * 60 + min;

    for (int i = 0; i < 8; i++) 
        if (time < departures[i]) {
            printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d a.m.\n", departures[i] / 60, departures[i] % 60, arrivals[i] / 60, arrivals[i] % 60);
            break;
        }
}