#include <stdio.h>

int main(void) {
    int digit_count[10] = {0};
    char c;

    printf("Enter a number and I will calculate how many times each digit appears: ");

    while((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') 
            digit_count[c-'0']++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("Number of %ds: %d\n", i, digit_count[i]);
    }
}