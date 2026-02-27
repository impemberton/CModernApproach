#include <stdio.h>

typedef struct {
  double real;
  double imaginary;
} Complex;

Complex c1, c2, c3;

Complex make_complex(double real, double imaginary) 
{
  Complex c = { real, imaginary };
  return c;
}

Complex add_complex(Complex c1, Complex c2) 
{
  return make_complex(
    c1.real + c2.real,
    c1.imaginary + c2.imaginary
  );
}

int main(void)
{
  c1 = make_complex(10, 5);
  c2 = make_complex(5, 10);
  printf("c1.real = %f, c1.imaginary = %f\n", c1.real, c1.imaginary);
  printf("c2.real = %f, c2.imaginary = %f\n", c2.real, c2.imaginary);
  printf("c3.real = %f, c3.imaginary = %f\n\n", c3.real, c3.imaginary);

  printf("adding c1 and c2 to make c3...\n");
  c3 = add_complex(c1, c2);

  printf("c3.real = %f, c3.imaginary = %f\n", c3.real, c3.imaginary);
}
