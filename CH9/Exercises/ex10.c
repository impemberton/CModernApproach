#include <stdio.h>

int largest_element(int a[], int n) {
    int largest = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > largest) largest = a[i];
    }
    return largest;
}

float average(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) 
        sum += a[i];
    return (float) sum / n;
}

int pos_count(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > 0) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int array[5] = {-1,2,3,4,5};
    printf("largest: %d\n", largest_element(array, 5));
    printf("average: %f\n", average(array, 5));
    printf("number of positive elements: %d\n", pos_count(array, 5));
}