#include <stdio.h>

int main(void) {
    int fib[40] = {0,1};

    for (int i = 2; i < 40; i++) {
        fib[i] = fib[i-2] + fib[i-1];
    }
    for (int i = 1; i < 41; i++) {
        printf("%10d ", fib[i-1]);
        if (i % 5 == 0){
            printf("\n");
        }
    }
    printf("\n");
}