#include <stdio.h>

int main(void) {
    int num, d,m,y;
    float price;

    printf("Enter item number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t£%6.2f\t\t%d/%d/%d\n", num, price, d,m,y);

}