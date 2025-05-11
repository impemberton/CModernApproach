#include <stdio.h>
#include <ctype.h>
#define N 100

float compute_GPA(char grades[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        switch (grades[i])
        {
        case 'A':
            sum += 4;
            break;
        case 'B':
            sum += 3;
            break;
        case 'C':
            sum += 2;
            break;
        case 'D':
            sum += 1;
            break;
        case 'F':
            sum += 0;
            break;
        default:
            break;
        }
    }
    return (float) sum / n;
}

int main(void) {
    printf("Enter Grades: ");
    char c, grades[N];
    int i = 0;
    while ((c = getchar()) != '\n' && i < N)
        if(isalpha(c)) {
            grades[i] = c;
            i++;
        }
    printf("The GPA is %.2f\n", compute_GPA(grades, i));
}