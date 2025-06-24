#include <stdio.h>
#include <string.h>

int main(void) {
    char word[20], largest[20], smallest[20];
    printf("Enter a word: ");
    scanf("%s", word);
    strcpy(largest, word);
    strcpy(smallest, word);
    while (1) {
        printf("Enter a word: ");
        scanf("%s", word);
        if (strcmp(word, smallest) < 0) 
            strcpy(smallest, word);
        else if (strcmp(word, largest) > 0) 
            strcpy(largest, word);
        if (strlen(word) == 4) {
            break;
        }
    }
    printf("\nSmallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
}
