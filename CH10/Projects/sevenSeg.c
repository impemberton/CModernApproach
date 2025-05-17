#include <stdio.h>
#define MAX_DIGITS 20

const int segments[10][7] = {{1, 1, 1, 1, 1, 1}, //0
                             {0, 1, 1}, //1
                             {1, 1, 0, 1, 1, 0, 1}, //2
                             {1, 1, 1, 1, 0, 0, 1}, //3
                             {0, 1, 1, 0, 0, 1, 1}, //4
                             {1, 0, 1, 1, 0, 1, 1}, //5
                             {1, 0, 1, 1, 1, 1, 1}, //6
                             {1, 1, 1}, //7
                             {1, 1, 1, 1, 1, 1, 1}, //8
                             {1, 1, 1, 1, 0, 1, 1}, //9
};
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
    char c;
    int digits[MAX_DIGITS];
    clear_digits_array();
    printf("Enter a number: ");
    for (int i = 0; (c = getchar()) != '\n' && i < MAX_DIGITS;) {
        if (c >= '0' && c <= '9') {
            process_digit((int) (c - '0'), i);
            i++;
        }
    }
    print_digits_array();
}

void clear_digits_array(void) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
}
void process_digit(int digit, int position) {
   if (segments[digit][0]) 
        digits[0][(position * 4) + 1] = '_';
   if (segments[digit][1]) 
        digits[1][(position * 4) + 2] = '|';
   if (segments[digit][2]) 
        digits[2][(position * 4) + 2] = '|';
   if (segments[digit][3]) 
        digits[2][(position * 4) + 1] = '_';
   if (segments[digit][4]) 
        digits[2][(position * 4)] = '|';
   if (segments[digit][5]) 
        digits[1][(position * 4)] = '|';
   if (segments[digit][6]) 
        digits[1][(position * 4) + 1] = '_';

}
void print_digits_array(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
            
}
