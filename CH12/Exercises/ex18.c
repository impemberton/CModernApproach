#include <stdio.h>
#include <ctype.h>

int evaluate_position(char board[8][8]) {
    int white = 0, black = 0;

    for (char *p = board[0], *end = board[8]; p < end; p++) {
        int points = 0;
        switch (tolower(*p)) {
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
        if (isupper(*p))
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
        {'P','P','P','P','P','P','P','Q'},
        {'R','N','B','K','Q','B','N','R'}
    };
    printf("Evaluation: %d\n", evaluate_position(board));
}
