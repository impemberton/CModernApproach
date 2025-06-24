#include <stdio.h>

int f(char *s, char *t);

int main(void) {
    char s1[10], s2[10];
    printf("Enter string1: ");
    scanf("%s", s1);
    printf("Enter string2: ");
    scanf("%s", s2);
    int fout = f(s1, s2);
    printf("%d\n", fout);
}

int f(char *s, char *t) {
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}
