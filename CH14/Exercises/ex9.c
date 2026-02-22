#include <stdio.h>
#define CHECK(x,y,n) (((x >= 0 && x <= n - 1) && (y >= 0 && y <= n-1)) ? 1 : 0)
#define MEDIAN(x,y,z) (((x >= y && x <= z) || (x <= y && x >= z)) ? x : (((y >= x && y <= z) || (y <= x && y >= z)) ? y : z))
#define POLYNOMIAL(x) ((3*((x)*(x)*(x)*(x)*(x))) + (2*((x)*(x)*(x)*(x))) - (5*((x)*(x)*(x))) - ((x)*(x)) + (7*(x)) - 6)   

int main()
{
  printf("CHECK(5, 10, 11) = %d\n", CHECK(5,10, 11));
  printf("CHECK(12, 10, 11) = %d\n", CHECK(12,10, 11));
  printf("CHECK(5, 14, 11) = %d\n", CHECK(5,14, 11));
  printf("CHECK(24, 19, 11) = %d\n\n", CHECK(24,19, 11));

  printf("MEDIAN(14, 19, 11) = %d\n", MEDIAN(14, 19, 11));
  printf("MEDIAN(24, 19, 11) = %d\n", MEDIAN(24, 19, 11));
  printf("MEDIAN(24, 9, 11) = %d\n", MEDIAN(24, 9, 11));
  printf("MEDIAN(23, 23, 11) = %d\n", MEDIAN(23, 23, 11));
  printf("MEDIAN(23, 11, 11) = %d\n", MEDIAN(23, 11, 11));
  printf("MEDIAN(23, 11, 23) = %d\n", MEDIAN(23, 11, 23));
  printf("MEDIAN(23, 23, 23) = %d\n\n", MEDIAN(23, 23, 23));

  printf("POLYNOMIAL(2) = %d\n", POLYNOMIAL(2));
  printf("POLYNOMIAL(5) = %d\n", POLYNOMIAL(5));
  return 0;
}
