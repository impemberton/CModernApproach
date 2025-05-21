#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

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
    time, hour, min, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time = hour * 60 + min;
    find_closest_flight(time, &departure_time, &arrival_time);
        
    printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d a.m.\n", departure_time / 60, departure_time % 60, arrival_time / 60, arrival_time % 60);
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
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
    };
    for (int i = 0; i < 8; i++) 
        if (desired_time < departures[i]) {
            *departure_time = departures[i];
            *arrival_time = arrivals[i];
            break;
        }
}
