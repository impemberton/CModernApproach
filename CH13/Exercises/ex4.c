#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int read_line(char str[], int n);
int read_line_skip_ws(char str[], int n);
int read_line_stop_at_ws(char str[], int n);
int read_line_to_nl(char str[], int n); 

int main (void) {
    char str[10], choice;
    while (true) {
        printf("Choose option:\n\n 0. exit\n 1. read_line\n 2. read_line_stop_at_ws\n 3. read_line_skip_ws\n 4. read_line_to_nl\n\nYour choice: ");
        choice = getchar();
        getchar();
        switch (choice) {
            case '0':
                exit(EXIT_SUCCESS);
            case '1': 
                read_line(str, 10); 
                break;
            case '2': 
                read_line_stop_at_ws(str, 10); 
                break;
            case '3': 
                read_line_skip_ws(str, 10); 
                break;
            case '4': 
                read_line_to_nl(str, 10); 
                break;
        }
        printf("%s\n\n", str);
    }
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int read_line_skip_ws(char str[], int n) {
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ');

    do {
        if (i < n)
            str[i++] = ch;

    } while ((ch = getchar()) != '\n');
    str[i] = '\0';
    return i;
}

int read_line_stop_at_ws(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (isspace(ch)) {
            break; 
        }
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int read_line_to_nl(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n - 1)
            str[i++] = ch;
    str[i] = '\n';
    str[i + 1] = '\0';
    return i;
}

