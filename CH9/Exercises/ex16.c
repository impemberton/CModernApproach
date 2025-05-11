#include <stdio.h>

int fact(int n) {
    int result = 1;

    while (--n > 0)
        result *= n+1;
    
    return result;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d factorial is %d\n", n, fact(n));
}