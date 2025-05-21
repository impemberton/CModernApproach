#include <stdio.h>
#define MAX_LENGTH 100

void find_two_largest(int a[], int n, int *largest, int *second_largest);
int main(void) {
    int a[MAX_LENGTH] = {1, 2, 3, 4,6 ,4 ,234, 54, 4,3}, largest, second_largest, check;
    find_two_largest(a, 10, &largest, &second_largest);
    printf("largest: %d\nsecond_largest: %d\n", largest, second_largest);
}
void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    *largest = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}
