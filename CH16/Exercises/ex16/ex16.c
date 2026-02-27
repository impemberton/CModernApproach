#include <stdio.h>
enum test {
  TEST1 = 5,
  TEST2 = 5,
  TEST3 = 6,
};

int main(void)
{
  printf("Value of TEST1: %d\n", TEST1);
  printf("Value of TEST2: %d\n", TEST2);
  printf("Value of TEST3: %d\n", TEST3);
  printf("TEST1 + TEST3 = %d\n", TEST1 + TEST3);
}
