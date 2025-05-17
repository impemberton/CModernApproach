#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int array[5];
  int sum = 0;
  printf("Enter 5 numbers: \n");
  scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
  for (int i = 0; i < 5; i++) 
    for (int j = 0; j < 5; j++)
      sum += abs(array[i] - array[j]);
  printf("The sum of the differences is %d\n", sum);
}
