#include <stdio.h>
struct {
  double a;
  union {
    char b[4];
    double c;
    int d;
  } e;
  char f[4];
} s;

int main(void)
{
  printf("sizeof(s): %lu\n", sizeof(s));
  printf("sizeof(s.a): %lu\n", sizeof(s.a));
  printf("sizeof(s.e): %lu\n", sizeof(s.e));
  printf("sizeof(s.f): %lu\n", sizeof(s.f));
}

// should allocate 20 bytes total however my machine allocates 24.
