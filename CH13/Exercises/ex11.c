#include <stdio.h>

int ptr_strcmp(char *s, char *t);

int main(void) {
    char s1[10], s2[10];
    printf("Enter string1: ");
    scanf("%s", s1);
    printf("Enter string2: ");
    scanf("%s", s2);
    int cmp = ptr_strcmp(s1, s2);
    printf("%d\n", cmp);
    
}
int ptr_strcmp(char *s, char *t) {
    while (*s == *t) {
        t++;
        if (*s++ == '\0')
            return 0;
    } 
    return *s - *t;
}
