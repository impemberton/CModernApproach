#include <stdio.h>

void selection_sort(int arr[], int n){
    int largest = arr[0];
    int end_value = arr[n-1];
    int largest_pos = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > largest) {
            largest = arr[i];
            largest_pos = i;
        }
    }
    arr[n-1] = largest;
    arr[largest_pos] = end_value;
    if (n > 1) {
        selection_sort(arr, n-1);
    }
}

int main(void) {
    int num[100] = {0}, i;
    char endchar = ' ';
    printf("Enter a series of integers to be sorted: ");
    for(i = 0; endchar != '\n' && i < 100; i++) {
        scanf("%d%c", &num[i], &endchar);
    }
    selection_sort(num, i);
    for (int j = 0; j < i; j++) printf("%d ", num[j]);
    printf("\n");
}