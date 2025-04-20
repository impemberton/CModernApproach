#include <stdio.h>

int main(void) {
    int i, j, result1, result2;

    for (i=1; i<=1000; i++) {
        for (j=1; j<=1000; j++) {
            result1 = (-i)/j;
            result2 = -(i/j);
            printf("%d %d\t", result1, result2);
            if (result1 != result2)
            {
                printf("(-i)/j != -(i/j)");
                break;
            }        
        }
        printf("\n");
    }
}