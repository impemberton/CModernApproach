#include <stdio.h>

int main(void) {
    for (float f = -10.f; f <= 10.f; f += 0.1f){
        float frac_part = f - (int) f;
        printf("f: %f\tfrac: %f\n", f, frac_part);
    }
}