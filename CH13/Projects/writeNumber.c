#include <stdio.h>

int main(void) {
    int num, teen, overtwenty;
    teen = 0;
    overtwenty = 1;

    char *ones[] = {"\b ", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num > 100 || num < 1) 
        printf("number must be between 1 and 99.");
    else if (num > 19) {
        printf("%s-", tens[num / 10]);
        printf("%s\n", ones[num % 10]);
    }
    else if (num > 9) 
        printf("%s\n", teens[num % 10]);
    else 
        printf("%s\n", ones[num]);
         
}
