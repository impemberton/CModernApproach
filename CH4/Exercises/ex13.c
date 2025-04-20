#include <stdio.h>

int main(void) {
    int i, j, k;

    i = 5;
    j = 5;
    k = 5;
    printf("'i++': %d '++i' : %d 'i += 1': %d\n", i++, ++j, (k += 1));
}