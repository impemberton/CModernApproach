#include <stdio.h>

int main(void) {
    int n = 0;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n");
    while(1){
        printf("Enter the size of magic square: ");
        scanf("%d", &n);
        if (n % 2 == 0 || n > 99 || n < 1) {
            printf("Size must be and odd number between 1 and 99\n");
        } else {
            break;
        }
    }

    int square[n][n]; // initisialise variable length array

    // set every item in array to 0
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            square[i][j] = 0;

    int x = n / 2, y = 0, last_x, last_y;

    for (int i = 1; i <= n*n; i++) {
        if (square[y][x] != 0) {
            x = last_x;
            y = last_y + 1;
        }
        square[y][x] = i;
        last_x = x;
        last_y = y;
        x++;
        y--;
        if (x > n - 1) {
            x = 0;
        }
        if (y < 0) {
            y = n-1;
        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", square[i][j]);
        } 
        printf("\n");
    }
        
}