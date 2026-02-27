#include <stdio.h>

struct {
  double real;
  double imaginary;
} c1, c2, c3;

int main(void)
{
  printf("c1.real = %f, c1.imaginary = %f\n", c1.real, c1.imaginary);
  printf("c2.real = %f, c2.imaginary = %f\n", c2.real, c2.imaginary);
  printf("c3.real = %f, c3.imaginary = %f\n", c3.real, c3.imaginary);
}

