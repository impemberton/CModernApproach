#include <stdio.h>

struct complex {
  double real;
  double imaginary;
};

struct complex c1, c2, c3;

struct complex make_complex(double real, double imaginary) 
{
  struct complex c = { real, imaginary };
  return c;
}

struct complex add_complex(struct complex c1, struct complex c2) 
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
