#include <stdio.h>

int main(void) {
    char checker_board[8][8];



    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if ((row + col) % 2 == 0) {
                checker_board[row][col] = 'B';
            } else {
                checker_board[row][col] = 'R';
            }
            printf("%c ", checker_board[row][col]);
        }
        printf("\n");
    }
}