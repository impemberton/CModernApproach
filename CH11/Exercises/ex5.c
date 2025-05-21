#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    long total_sec;
    int hr, min, sec;

    printf("Enter a time in seconds: ");
    scanf("%ld", &total_sec);
    split_time(total_sec, &hr, &min, &sec);
    printf("Time: %02d:%02d:%02d\n", hr, min, sec);

}

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / (60*60);
    total_sec %= 60*60;
    *min = total_sec / 60;
    *sec = total_sec % 60;    
}
