#include <stdio.h>
#include <ctype.h>

#define LENGTH ((int) (sizeof(message) / sizeof(message[0])))

int main(void) {
    char message[50] = {0};
    char c;
    int i = 0;

    printf("Enter message: ");

    while((c = toupper(getchar())) != '\n') {
        message[i] = c;
        i++;
    }
    printf("In B1FF-speak: ");
    for (i = 0; i < LENGTH; i++) {
        switch (message[i])
        {       
        case 'A':
            printf("4");
            break;
        case 'B':
            printf("8");
            break;
        case 'E':
            printf("3");
            break;
        case 'I':
            printf("1");
            break;
        case 'O':
            printf("0");
            break;
        case 'S':
            printf("5");
            break;
        case 0:
            goto end_of_message;
        default:
            printf("%c", message[i]);
            break;
        }
    }
    end_of_message: 
    printf("!!!!!!!!!!\n");
}