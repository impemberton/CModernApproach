#include <stdio.h>

struct {
  double real;
  double imaginary;
} c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

int main(void)
{
  printf("c1.real = %f, c1.imaginary = %f\n", c1.real, c1.imaginary);
  printf("c2.real = %f, c2.imaginary = %f\n", c2.real, c2.imaginary);
  printf("c3.real = %f, c3.imaginary = %f\n\n", c3.real, c3.imaginary);

  c1 = c2;

  printf("c1.real = %f, c1.imaginary = %f\n\n", c1.real, c1.imaginary);

  printf("Adding c1 and c2 and storing in c3...\n");

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;
  printf("c3.real = %f, c3.imaginary = %f\n", c3.real, c3.imaginary);

  
}

