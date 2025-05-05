#include <stdio.h>

int main(void) {
    int grades[5][5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter grades for student %d: ", i+1);
        for (int j = 0; j < 5; j++)
            scanf("%d", &grades[i][j]);
    }

    printf("\nStudent\tTotal\tAverage\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            sum += grades[i][j];
        }
        printf("%d\t%d\t%d\n", i+1, sum, sum/5);
        sum = 0;
    }

    printf("\nQuiz\tTotal\tAverage\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            sum += grades[j][i];
        }
        printf("%d\t%d\t%d\n", i+1, sum, sum/5);
        sum = 0;
    }

    printf("\n");
}