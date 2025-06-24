#include <stdio.h>
#include <ctype.h>

void capitalise(char string[]);
void capitalise_ptr(char *string);

int main(void) {
    char user_input[10];
    printf("Enter a word: ");
    scanf("%s", user_input);
    capitalise_ptr(user_input);
    printf("%s\n", user_input);
}

void capitalise(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }
}

void capitalise_ptr(char *string) {
    while (*string != '\0') {
        *string++ = toupper(*string); 
    }
}
