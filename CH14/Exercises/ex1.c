#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define PRODUCTLESSTHAN100(x, y) (((x) * (y)) < 100)

int main(void) {
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      printf("%d cubed is %d\n", i + j, CUBE(i + j));
  for (int n = -5; n < 10; n++)
    for (int m = 0; m < 10; m++)
      printf("%d remainder 4 is %d\n", n + m, REMAINDER(n + m));
  for (int i = 0; i < 15; i++)
    for (int j = 0; j < 15; j++)
      printf("Is %d * %d less than 100: %d\n", i, j, PRODUCTLESSTHAN100(i, j));
}
