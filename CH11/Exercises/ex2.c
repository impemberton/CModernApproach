#include <stdio.h>

int main(void) {
    int i = 1, *p = &i, *q = &i;
    printf("i: %d, p: %p, q: %p", i, p, q);
    //p = i;
    //printf("i: %d, p: %p, q: %p", i, p, q);
    //*p = &i;
    //printf("i: %d, p: %p, q: %p", i, p, q);
    //&p = q;
    //printf("i: %d, p: %p, q: %p", i, p, q);
    //p = &q;
    //printf("i: %d, p: %p, q: %p", i, p, q);
    p = *&q;
    printf("i: %d, p: %p, q: %p", i, p, q);
    p = q;
    printf("i: %d, p: %p, q: %p", i, p, q);
    //p = *q;
    //printf("i: %d, p: %p, q: %p", i, p, q);
    //*p = q;
    printf("i: %d, p: %p, q: %p", i, p, q);
    *p = *q;
    printf("i: %d, p: %p, q: %p", i, p, q);
}
