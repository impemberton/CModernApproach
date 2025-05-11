#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8]) {
    int white = 0, black = 0;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) {
            int points = 0;
            switch (tolower(board[i][j]))
            {
            case 'q':
                points = 9;
                break;
            case 'r':
                points = 5;
                break;
            case 'b':case 'n':
                points = 3;
                break;
            case 'p':
                points = 1;
                break;
            default:
                break;
            }
            if (isupper(board[i][j]))
                white += points;
            else 
                black += points;
        }
    return white - black;       
}

int main(void) {
    char board[8][8] = { 
        {'r','n','b','k','q','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','K','Q','B','N','R'}
    };
    printf("Evaluation: %d\n", evaluate_position(board));
}