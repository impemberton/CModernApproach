#include <stdio.h>

int main(void) {
    char message[100], c;
    int key, i;

    printf("Enter message to be encrypted: ");
    
    for(i = 0; c != '\n'; i++) {
        c = getchar();
        message[i] = c;
    }
    
    printf("Enter shift amount: ");
    scanf("%d", &key);

    printf("Encrypted message: ");
    for (int j = 0; j < i; j++) {
        if (message[j] >= 'a' && message[j] <= 'z') {
            printf("%c", ((message[j] - 'a') + key) % 26 + 'a');
        } 
        else if (message[j] >= 'A' && message[j] <= 'Z') {
            printf("%c", ((message[j] - 'A') + key) % 26 + 'A');
        } 
        else {
            printf("%c", message[j]);
        }
    }
    printf("\n");

}