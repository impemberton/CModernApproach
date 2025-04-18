/* This program will transform a 
date given in form dd/mm/yyyy and 
display it as yyyymmdd */

#include <stdio.h>

int main(void) {
    int d, m, y;

    scanf("%d/%d/%d", &d, &m, &y);
    printf("%.4d%.2d%.2d\n", y, m, d);
}