#include <stdio.h>

int sum_array(int *p, int n);

int main(void) {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", sum_array(arr, 10));
}

int sum_array(int *p, int n) {
    int sum = 0;

    for (int *q = p + n; p < q; p++)
        sum += *p;
    return sum;
}
