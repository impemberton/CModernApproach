#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    srand((unsigned) time(NULL));
    bool play = true;
    char input;
    int wins = 0, losses = 0;
    do {
        if (play_game()) {
            printf("You win!\n");
            wins++;
        }
        else {
            printf("You lose!\n");
            losses++;
        }
            
        printf("\nPlay again? ");
        scanf(" %c", &input);
        printf("\n");
        } while (input == 'y' || input == 'Y');
    printf("Wins: %d Losses: %d\n", wins, losses);
}

bool play_game(void) {
    int point = 0, roll = roll_dice();
    switch (roll)
    {
    case 2: case 3: case 12:
        return false;
        break;
    case 7: case 11:
        return true;
        break;
    default:
        point = roll;
        printf("Your point is %d\n", point);
        break;
    }
    while (true) {
        roll = roll_dice();
        if (roll == point)
            return true;
        if (roll == 7)
            return false;
    }
}

int roll_dice(void) {
    int dice1 = (rand() % 5) + 1;
    int dice2 = (rand() % 5) + 1;
    printf("You rolled: %d\n", dice1+dice2);
    return dice1 + dice2;
}
