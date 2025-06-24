#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compute_scrabble_value(const char *sentence);

int main(void){
    char word[100];
    while (1) {
        printf("Enter a word: ");
        scanf("%s", word);
        printf("Scrabble value: %d\n", compute_scrabble_value(word));
    }
}

int compute_scrabble_value(const char *sentence) {
    int score = 0;
    char copy[100];
    strcpy(copy, sentence);
    for (char *p = copy; *p; p++) {
        switch (toupper(*p)) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                score += 1;
                break;
            case 'D': case 'G': 
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P': 
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y': 
                score += 4;
                break;
            case 'K': 
                score += 5;
                break;
            case 'J': case 'X': 
                score += 8;
            break;
            case 'Q': case 'Z': 
                score += 10;
                break;
            default:
                break;
        }
    }
    return score;

}
