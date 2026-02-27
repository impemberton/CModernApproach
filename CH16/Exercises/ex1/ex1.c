#include <stdio.h>

struct { int x, y; } x;
struct { int x, y; } y;

int main(void)
{
  x.x = 1;
  x.y = 2;
  y.x = 3;
  y.y = 4;
  
  printf("x.x = %d\n", x.x);
  printf("x.y = %d\n", x.y);
  printf("y.x = %d\n", y.x);
  printf("y.y = %d\n", y.y);
}
