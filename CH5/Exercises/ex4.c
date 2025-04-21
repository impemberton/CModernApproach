#include <stdio.h>

int main(void) {
    int i, j, out;

    printf("Pick a number for i and j: ");
    scanf("%d %d", &i, &j);
    out = i > j ? 1 : i == j ? 0 : -1;
    printf("%d\n", out);
}