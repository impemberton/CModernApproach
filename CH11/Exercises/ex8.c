#include <stdio.h>

int *find_largest(int a[], int n);

int main(void) {
    int test_array[10] = {2, 4, 3, 6, 5, 10, 9 , 8, 1, 7};
    int *p_largest = find_largest(test_array, 10);
    printf("Largest value is %d stored at %p\n", *p_largest, p_largest);
}

int *find_largest(int a[], int n) {
    int *p_largest = &a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > *p_largest)
            p_largest = &a[i];
    return p_largest;
}
