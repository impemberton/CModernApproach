#include <stdio.h>

int main(void) {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *low = &a[0], *high = &a[9], *middle = low + ((int) (high - low) / 2);
    printf("low: %d, middle: %d, high: %d\n", *low, *middle, *high);
}
