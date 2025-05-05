#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool weekend[7] = {true, [6] = true};

    for (int i = 0; i < 7; i++) {
        printf("%d ", weekend[i]);
    }
    printf("\n");
}