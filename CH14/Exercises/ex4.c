#include <stdio.h>

#define AVG(x, y) (x - y) / 2
#define AREA(x, y) (x) * (y)
#define AVG_FIX(x, y) (x - ((x - y) / 2))
#define AREA_FIX(x, y) ((x) * (y))

int main(void) {
  printf("Here's an issue with AVG(x, y):\n");
  printf("AVG(5, 3) = %d\n", AVG(5, 3));
  printf("This gives half the difference between x and y\n");

  printf("Here is the fixed version:\n");
  printf("AVG_FIX(5, 3) = %d\n\n", AVG_FIX(5, 3));

  printf("Here's an issue with AREA(x,y):\n");
  printf("Let's say the whole area costs 100 and we want to find the price per unit...\n");
  printf("100 / AREA(10, 5) = %d\n", 100 / AREA(10, 5));
  printf("This is because the Macro expands into 100 / (10) * (5) = 10 * 5 = 50\n");

  printf("Here is the fixed version:\n");
  printf("100 / AREA_FIX(10, 5) = %d\n", 100 / AREA_FIX(10, 5));
}
