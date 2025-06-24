#include <stdio.h>
#include <string.h>

char *duplicate(const char *p);

int main(void) {
    char *r = "test";
    char *s = duplicate(r);
    printf("%s\n", s);
}

char *duplicate(const char *p) {
    char *q;

    strcpy(q, p);
    return q;
}
