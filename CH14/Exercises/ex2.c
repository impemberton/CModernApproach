#include <stdio.h>
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
  int a[10] = {0};
  printf("Length of array is %ld\n", NELEMS(a));
}
