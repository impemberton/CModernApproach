#include <stdio.h>
#define ERROR(str, items) fprintf(stderr, str, items)

int main()
{
  int index = 5;
  ERROR("Range error: index = %d\n", index);
  return 0;
}
