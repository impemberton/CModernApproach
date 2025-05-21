#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void) {
    double array[5] = {1.5, 2.7, 7.5, 3.9, 9.2}, avg, sum;
    avg_sum(array, 5, &avg, &sum);
    printf("Avg of array: %lf\nSum of array: %lf\n", avg, sum);
}

void avg_sum(double a[], int n, double *avg, double *sum){
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}


