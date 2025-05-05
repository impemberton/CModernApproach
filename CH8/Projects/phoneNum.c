#include <stdio.h>

int main(void){
    char c;
    char num[15] = {0};
    int i = 0;
    printf("Enter phone number: ");
    
    while (c != '\n')
    {
        c = getchar();
        switch (c)
        {
        case 'A': case 'B': case 'C':
            c = '2';
            break;
        case 'D': case 'E': case 'F':
            c = '3';
            break;
        case 'G': case 'H': case 'I':
            c = '4';
            break;
        case 'J': case 'K': case 'L':
            c = '5';
            break;
        case 'M': case 'N': case 'O':
            c = '6';
            break;
        case 'P': case 'Q': case 'R': case 'S':
            c = '7';
            break;
        case 'T': case 'U': case 'V':
            c = '8';
            break;
        case 'W': case 'X': case 'Y': case 'Z':
            c = '9';
            break;
        
        default:
            break;
        }
        num[i] = c;
        i++;
    }
    printf("In numeric form: ");
    for (i = 0; i < 15; i++){
        if (num[i] != 0) 
            printf("%c", num[i]);
    }
}