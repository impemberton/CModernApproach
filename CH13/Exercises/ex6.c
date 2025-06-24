#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void censor(char string[]);

int main(void) {
    char user_input[10];
    printf("Enter a word: ");
    scanf("%s", user_input);
    censor(user_input);
    printf("%s\n", user_input);
}

void censor(char string[]) {
    char *censor_string = "foo";
    for (int i = 0; string[i] != '\0'; i++) {
        bool to_censor = true;
        for (int j = 0; j < 3; j++) 
            if (tolower(string[i + j]) != censor_string[j])
                to_censor = false;
        if (to_censor)
            for (int j = 0; j < 3; j++) 
                string[i+j] = 'x';
    }
}
