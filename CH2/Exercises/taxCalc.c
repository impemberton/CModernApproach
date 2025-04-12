#include <stdio.h>
#define TAXPERC 0.05f

int main(void){
    float value;
    printf("This program will calculate a 5%% tax on any price.\nPlease enter a value: ");
    scanf("%f", &value);
    printf("With tax added: £%.01f\n", value + (value * TAXPERC));
}