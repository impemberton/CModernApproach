#include <stdio.h>

int main(void) {
    for(int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
        //continue jumps to here
    }
}