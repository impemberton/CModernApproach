#include <stdio.h>
#include <stdbool.h>

struct fraction {
  int numerator;
  int denominator;
};

struct fraction reduce(struct fraction f)
{
  bool neg = f.numerator < 0;
  if (neg) f.numerator = -f.numerator;

  int gcd_max = f.numerator > f.denominator ? f.denominator : f.numerator, gcd = 1;
  for (int i = 1; i <= gcd_max; i++)
    if (f.numerator % i == 0 && f.denominator % i == 0)
      gcd = i;
  
  if (neg) f.numerator = -f.numerator;

  return (struct fraction) {f.numerator / gcd, f.denominator / gcd};
}

struct fraction add(struct fraction f1, struct fraction f2)
{
  int n = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator),
      d = (f1.denominator * f2.denominator);
  return reduce((struct fraction) {n, d});
}

struct fraction sub(struct fraction f1, struct fraction f2) 
{
  return add(f1, (struct fraction) {-f2.numerator, f2.denominator});
}

struct fraction mul(struct fraction f1, struct fraction f2)
{
  return reduce((struct fraction) {
    f1.numerator * f2.numerator,
    f1.denominator * f2.denominator
  });
}

struct fraction div(struct fraction f1, struct fraction f2)
{
  return reduce((struct fraction) {
    f1.numerator * f2.denominator,
    f1.denominator * f2.numerator
  });
}

int main(void)
{
  struct fraction f1, f2, reduced_f;

  printf("Enter a fraction in the form x/y: ");
  scanf("%d/%d", &f1.numerator, &f1.denominator);

  reduced_f = reduce(f1);
  printf(
    "%d/%d reduced to its lowest terms is %d/%d\n", 
    f1.numerator, f1.denominator, 
    reduced_f.numerator, reduced_f.denominator
  );

  printf("Enter another fraction in the form x/y: ");
  scanf("%d/%d", &f2.numerator, &f2.denominator);

  struct fraction f1addf2 = add(f1, f2);
  printf("%d/%d + %d/%d = %d/%d\n", 
    f1.numerator, f1.denominator,
    f2.numerator, f2.denominator,
    f1addf2.numerator, f1addf2.denominator
  );
  
  struct fraction f1subf2 = sub(f1, f2);
  printf("%d/%d - %d/%d = %d/%d\n", 
    f1.numerator, f1.denominator,
    f2.numerator, f2.denominator,
    f1subf2.numerator, f1subf2.denominator
  );

  struct fraction f1mulf2 = mul(f1, f2);
  printf("%d/%d * %d/%d = %d/%d\n", 
    f1.numerator, f1.denominator,
    f2.numerator, f2.denominator,
    f1mulf2.numerator, f1mulf2.denominator
  );

  struct fraction f1divf2 = div(f1, f2);
  printf("%d/%d / %d/%d = %d/%d\n", 
    f1.numerator, f1.denominator,
    f2.numerator, f2.denominator,
    f1divf2.numerator, f1divf2.denominator
  );
}
