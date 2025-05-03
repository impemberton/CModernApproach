#include <stdio.h>

int main(void) {
    int hour, min;
    char ampm;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &ampm);

    if (hour == 12) {
        hour -= 12;
    }

    switch (ampm)
    {
    case 'a': case 'A':
        printf("Equivalent 24-hour time: %02d:%02d\n", hour, min);
        break;
    
    case 'p': case 'P':
        printf("Equivalent 24-hour time: %02d:%02d\n", hour + 12, min);
        break;
    default:
        break;
    }
}