#include <stdio.h>
#define LEN 100

int main(void) {
    char sentence[LEN] = {0}, *p = sentence, terminator, c;


    printf("Enter a sentence: ");

    while((c = getchar()) != '\n') {
        if (c == '.' || c == '!' || c == '?') {
            terminator = c;
            break;
        } else {
            *p++ = c;
        }     
        
    }
    printf("Reversal of sentence: ");

    
    for(int word_len = 0; p >= sentence - 1; word_len++, p--) {
        if (*p == ' ' || p == sentence - 1) {
            for(int j = 1; j < word_len; j++){
                printf("%c", *(p + j));
            }
            printf(" ");
            word_len = 0;
        }
    }
    printf("\b%c\n", terminator);
}
