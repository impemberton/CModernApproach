#include <stdio.h>

int main(void){
    int r1c1, r1c2, r1c3, r1c4;
    int r2c1, r2c2, r2c3, r2c4;
    int r3c1, r3c2, r3c3, r3c4;
    int r4c1, r4c2, r4c3, r4c4;
    int r1sum, r2sum, r3sum, r4sum;
    int c1sum, c2sum, c3sum, c4sum;
    int diagsum1, diagsum2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &r1c1, &r1c2, &r1c3, &r1c4, &r2c1, &r2c2, &r2c3, &r2c4, &r3c1, &r3c2, &r3c3, &r3c4, &r4c1, &r4c2, &r4c3, &r4c4);

    r1sum = r1c1+r1c2+r1c3+r1c4;
    r2sum = r2c1+r2c2+r2c3+r2c4;
    r3sum = r3c1+r3c2+r3c3+r3c4;
    r4sum = r4c1+r4c2+r4c3+r4c4;

    c1sum = r1c1+r2c1+r3c1+r4c1;
    c2sum = r1c2+r2c2+r3c2+r4c2;
    c3sum = r1c3+r2c3+r3c3+r4c3;
    c4sum = r1c4+r2c4+r3c4+r4c4;

    diagsum1 = r1c1+r2c2+r3c3+r4c4;
    diagsum2 = r1c4+r2c3+r3c2+r4c1;

    printf("\n%2d\t%2d\t%2d\t%2d\n%2d\t%2d\t%2d\t%2d\n%2d\t%2d\t%2d\t%2d\n%2d\t%2d\t%2d\t%2d\n", r1c1, r1c2, r1c3, r1c4, r2c1, r2c2, r2c3, r2c4, r3c1, r3c2, r3c3, r3c4, r4c1, r4c2, r4c3, r4c4);
    printf("\nRow sums: %d %d %d %d", r1sum, r2sum, r3sum, r4sum);
    printf("\nColumn sums: %d %d %d %d", c1sum, c2sum, c3sum, c4sum);
    printf("\nDiagonal sums: %d %d\n", diagsum1, diagsum2);
}