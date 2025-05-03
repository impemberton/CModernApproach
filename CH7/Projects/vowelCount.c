#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    int count;

    printf("Enter a sentence: ");

    while (c != '\n'){
        c = toupper(getchar());
        switch (c)
        {
        case 'A': case 'E': case 'I': case 'O': case 'U': 
            count++;
            break;
        
        default:
            break;
        }
    }
    printf("Your sentence contains %d vowels.\n", count);
}