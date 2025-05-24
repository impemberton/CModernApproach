#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void) {
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, key;

    printf("Enter a number to search for: ");
    scanf("%d", &key);
    if (search(a,10,key))
        printf("True\n");
    else
        printf("False\n");

}


bool search(const int a[], int n, int key){
    int *p = a, *q = p + n;
    while (p < q) 
        if (key == *p++)
            return true;
    return false;
}

