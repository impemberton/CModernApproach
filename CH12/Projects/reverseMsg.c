#include <stdio.h>
#define LEN 100

int main(void) {
    char msg[LEN], c;
    int i;
    printf("Enter a message: ");
    for (i = 0; (c = getchar()) != '\n' && i < LEN; i++)
        msg[i] = c;
    printf("Reversal is: ");
    for (; i >= 0; i--)
        printf("%c", msg[i]);
    printf("\n");
}
