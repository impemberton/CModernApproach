#include <stdio.h>

int main(void) {
    int GS1, group_id, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &group_id, &pub_code, &item_num, &check_digit );
    printf("GS1 Prefix: %d\n", GS1);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);
}