#include <stdio.h>

int main(void){
    int height, width, depth, volume;

    printf("Please enter a height: ");
    scanf("%d", &height);
    printf("Please enter a width: ");
    scanf("%d", &width);
    printf("Please enter a depth: ");
    scanf("%d", &depth);
    
    volume = (height * width * depth);

    printf("The weight of the box is %dkg.\n", (volume + 165) / 166);
}