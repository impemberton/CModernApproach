#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Grades must be between 0 and 100.\n");
    } else {
        switch (grade / 10)
            {
            case 10: case 9:
                printf("Letter grade: A\n");
                break;
            case 8:
                printf("Letter grade: B\n");
                break;
            case 7:
                printf("Letter grade: C\n");
                break;
            case 6:
                printf("Letter grade: D\n");
                break;
            default:
                printf("Letter grade: F\n");
                break;
            }
    }
    
    
}