#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
    int i, j;
    printf("Enter i: ");
    scanf("%d", &i);
    printf("Enter j: ");
    scanf("%d", &j);
    printf("Before swap. i: %d, j: %d\n", i, j);
    swap(&i, &j);
    printf("After swap. i: %d, j: %d\n", i, j);
}

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
