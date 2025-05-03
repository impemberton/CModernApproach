#include <stdio.h>

int main(void) {
    int dep1 = 8*60,        arr1 = 10*60 + 16,
        dep2 = 9*60 + 43,   arr2 = 11*60 + 52,
        dep3 = 11*60 + 19,  arr3 = 13*60 + 31,
        dep4 = 12*60 + 47,  arr4 = 15*60,
        dep5 = 14*60,       arr5 = 16*60 + 8,
        dep6 = 15*60 + 45,  arr6 = 17*60 + 55,
        dep7 = 19*60,       arr7 = 21*60 + 20,
        dep8 = 21*60,       arr8 = 23*60 + 58,
        time, hour, min;

    char ampm;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &ampm);
    if (hour == 12) {
        hour -= 12;
    }

    switch (ampm)
    {
    case 'a': case 'A':
        time = hour * 60 + min;
        break;
    case 'p': case 'P':
        time = (hour + 12) * 60 + min;
        break;
    default:
        break;
    }
    

    if (time < dep1) {
        printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d a.m.\n", dep1 / 60, dep1 % 60, arr1 / 60, arr1 % 60);
    } else if (time < dep2) {
        printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d a.m.\n", dep2 / 60, dep2 % 60, arr2 / 60, arr2 % 60);
    } else if (time < dep3) {
        printf("Closest departure time is %02d:%02d a.m., arriving at %02d:%02d p.m.\n", dep3 / 60, dep3 % 60, arr3 / 60, arr3 % 60);
    } else if (time < dep4) {
        printf("Closest departure time is %02d:%02d p.m., arriving at %02d:%02d p.m.\n", dep4 / 60, dep4 % 60, arr4 / 60, arr4 % 60);
    } else if (time < dep5) {
        printf("Closest departure time is %02d:%02d p.m., arriving at %02d:%02d p.m.\n", dep5 / 60, dep5 % 60, arr5 / 60, arr5 % 60);
    } else if (time < dep6) {
        printf("Closest departure time is %02d:%02d p.m., arriving at %02d:%02d p.m.\n", dep6 / 60, dep6 % 60, arr6 / 60, arr6 % 60);
    } else if (time < dep7) {
        printf("Closest departure time is %02d:%02d p.m., arriving at %02d:%02d p.m.\n", dep7 / 60, dep7 % 60, arr7 / 60, arr7% 60);
    } else {
        printf("Closest departure time is %02d:%02d p.m., arriving at %02d:%02d p.m.\n", dep8 / 60, dep8 % 60, arr8 / 60, arr8 % 60);
    } 
}