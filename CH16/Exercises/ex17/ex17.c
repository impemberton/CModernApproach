#include <stdio.h>
enum {FALSE, TRUE} b;
int i;

// all are legal but some are unsafe
int main(void)
{
  printf("b: %d\n", b);
  printf("i: %d\n\n", i);

  b = FALSE; // safe
  printf("after b = FALSE;\n");
  printf("b: %d\n", b);
  printf("i: %d\n\n", i);

  b = i; // potentially unsafe as i could be a value outside the enums range
  printf("after b = i;\n");
  printf("b: %d\n", b);
  printf("i: %d\n\n", i);

  b++; // potentially unsafe as the enum could end up outside its range
  printf("after b++;\n");
  printf("b: %d\n", b);
  printf("i: %d\n\n", i);

  i = b; // safe
  printf("after i = b;\n");
  printf("b: %d\n", b);
  printf("i: %d\n\n", i);

  i = 2 * b + 1; // safe
  printf("after i = 2 * b + 1\n");
  printf("b: %d\n", b);
  printf("i: %d\n\n", i);
}
