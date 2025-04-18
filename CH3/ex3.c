#include <stdio.h>

int main(void) {
    int a1, a2;
    scanf("%d", &a1);
    scanf(" %d", &a2);
    printf("%d\n%d\n", a1, a2);
    
    int b1,b2,b3,b4,b5,b6;
    scanf("%d-%d-%d", &b1,&b2,&b3);
    scanf("%d -%d -%d", &b4,&b5,&b6);
    printf("%d-%d-%d", b1, b2, b3);
    printf("%d -%d -%d", b4, b5, b6);

    float c1, c2;
    scanf("%f", &c1);
    scanf("%f ", &c2);
    printf("%f\n%f\n", c1, c2);

    float d1,d2,d3,d4;
    scanf("%f,%f", &d1,&d2);
    scanf("%f, %f", &d3, &d4);
    printf("%f,%f\n", d1,d2);
    printf("%f, %f\n", d3,d4);

}