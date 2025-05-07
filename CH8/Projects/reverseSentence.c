#include <stdio.h>

int main(void) {
    char sentence[100] = {0};
    char terminator, c;
    int i = 0;

    printf("Enter a sentence: ");

    while((c = getchar()) != '\n') {
        if (c == '.' || c == '!' || c == '?') {
            terminator = c;
            break;
        } else {
            sentence[i] = c;
            i++;
        }     
        
    }
    printf("Reversal of sentence: ");

    
    for(int word_len = 0; i >= -1; i--, word_len++) {
        if (sentence[i] == ' ' || i == -1) {
            for(int j = 1; j < word_len; j++){
                printf("%c", sentence[i + j]);
            }
            printf(" ");
            word_len = 0;
        }
    }
    printf("\b%c\n", terminator);
}