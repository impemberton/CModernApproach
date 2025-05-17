#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

void generate_random_walk(char walk[10][10]) {
    char step = 'A';
    srand((unsigned) time(NULL));
    int coord_x = rand() % 10, coord_y = rand() % 10;
    int direction = rand() % 4;
    bool tested_directions[4] = {false};
    bool can_move = false;

    for (int i = 0; i < 10; i++)
        for(int j =0; j < 10; j++)
            walk[i][j] = '.';

    while(step <= 'Z') {
        walk[coord_x][coord_y] = step;
        step++;
        while (!can_move) {
            int tried = 0;
            tested_directions[direction] = true;
            switch (direction) {
                case UP:
                    if (coord_y - 1 >= 0 && walk[coord_x][coord_y - 1] == '.') {
                        coord_y--;
                        can_move = true;
                    } 
                    break;
                case RIGHT:
                    if (coord_x + 1 <= 9 && walk[coord_x + 1][coord_y] == '.') {
                        coord_x++;
                        can_move = true;
                    } 
                    break;
                case DOWN:
                    if (coord_y + 1 <= 9 && walk[coord_x][coord_y + 1] == '.') {
                        coord_y++;
                        can_move = true;
                    } 
                    break;
                case LEFT:
                    if (coord_x - 1 >= 0 && walk[coord_x - 1][coord_y] == '.') {
                        coord_x--;
                        can_move = true;
                    } 
                    break;
                default:
                    break;
            }
            direction = rand() % 4;
            if (tested_directions[0] && tested_directions[1] && tested_directions[2] && tested_directions[3] && tried > 10) goto early_quit;
            tried++;
        }
        can_move = false;
        for (int i = 0; i < 4; i++) tested_directions[i] = false;
    } 
    early_quit:
}

void print_array(char walk[10][10]) {
    for (int i = 0; i < 10; i++){
        for(int j =0; j < 10; j++)
            printf("%c", walk[i][j]);
        printf("\n");
    }
}

int main(void) {
    char map[10][10];
    generate_random_walk(map);
    print_array(map);
}