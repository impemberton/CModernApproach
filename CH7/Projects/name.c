#include <stdio.h>
#include <ctype.h>

int main(void){
    char c, initial;
    
    printf("Enter a first and last name: ");

    while (toupper(c) < 'A' || toupper(c) > 'Z')
    {
        c = getchar();
    }
    initial = c;
    while (toupper(c) > 'A' || toupper(c) < 'Z')
    {
        c = getchar();
        if (c == ' ') break;
    }
    while (c != '\n')
    {
        c = getchar();
        if (c != '\n') printf("%c", c);
    }
    printf(", %c.\n", initial);
    
}