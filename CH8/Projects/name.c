#include <stdio.h>
#include <ctype.h>

int main(void){
    char c, initial, last_name[20] = {0};
    int i = 0;
    
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
        if (toupper(c) > 'A' && toupper(c) < 'Z') {
            last_name[i] = c;
            i++;
        }
        
    }
    printf("You entered the name: ");
    for (i = 0; i < 20; i++){
        printf("%c", last_name[i]);
    }
    
    printf(", %c.\n", initial);
    
}