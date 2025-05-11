#include <stdio.h>

double inner_product(double a[], double b[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++) 
        sum += (a[i] * b[i]);
    return sum;
}

int main(void) {
    double a[4] = {3, 2, 3, 4};
    double b[4] = {1, 2, 3, 4};
    printf("%lf\n", inner_product(a, b, 4));
}