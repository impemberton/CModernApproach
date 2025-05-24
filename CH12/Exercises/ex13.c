#include <stdio.h>
#define N 10

int main(void) {
    double ident[N][N];
    double *p = ident, *end = p + N * N;
    int count = 0;
    while (p < end) {
        if (count++ % (N + 1)== 0) {
            *p++ = 1.0;
        } else {
            *p++ = 0.0;
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf("%.0lf ", ident[i][j]);
        printf("\n");
    }
}
