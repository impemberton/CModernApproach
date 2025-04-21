#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, largest, smallest, largest2, smallest2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 > i2){
        largest = i1;
        smallest = i2;
    }   else {
        largest = i2;
        smallest = i1;
    }
    if (i3 > i4){
        largest2 = i3;
        smallest2 = i4;
    }   else {
        largest2 = i4;
        smallest2 = i3;
    }
    if (largest > largest2) {
        printf("Largest: %d\n", largest);
    } else {
        printf("Largest: %d\n", largest2);
    }
    if (smallest < smallest2) {
        printf("Smallest: %d\n", smallest);
    } else {
        printf("Smallest: %d\n", smallest2);
    }

    return 0;
}