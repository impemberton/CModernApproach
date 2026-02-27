#include <stdio.h>
union {
  double a;
  struct {
    char b[4];
    double c;
    int d;
  } e;
  char f[4];
} u;

int main(void)
{
  printf("sizeof(u): %lu\n", sizeof(u));
  printf("sizeof(u.a): %lu\n", sizeof(u.a));
  printf("sizeof(u.e): %lu\n", sizeof(u.e));
  printf("sizeof(u.f): %lu\n", sizeof(u.f));
}

// should allocate 16 bytes as that's the size of "e" which is the largest member.
