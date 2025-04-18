#include <stdio.h>

int main(void) {
    float test = 69.0;
    printf("%-8.1e\n", test);
    printf("%10.6e\n", test);
    printf("%-8.3f\n", test);
    printf("%6.0f\n", test);
}