#include <stdio.h>
#include <stdbool.h>

struct color {
  int red;
  int green;
  int blue;
};

struct color make_color(int red, int green, int blue)
{
  int a[3] = {red, green, blue};
  for (int i = 0; i < 3; i++) {
    if (a[i] < 0) a[i] = 0;
    if (a[i] > 255) a[i] = 255;
  }
  return (struct color) {a[0], a[1], a[2]};
}

int getRed(struct color c) {
  return c.red;
}

bool equal_color(struct color c1, struct color c2) {
  return c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue;
}

struct color brighter(struct color c)
{
  if (equal_color(c, (struct color){}))
    return (struct color) {3,3,3};
  int a[3] = {c.red, c.green, c.blue};
  for (int i = 0; i < 3; i++) {
    if (a[i] > 0 && a[i] < 3)
      a[i] = 3;
    a[i] /= 0.7;
  }
  return make_color(a[0], a[1], a[2]);
}

struct color darker(struct color c)
{
  return make_color(c.red * 0.7, c.green * 0.7, c.blue * 0.7); 
}

int main(void) 
{
  int red, green, blue;
  printf("Enter a colour in the form RRR GGG BBB: ");
  scanf("%3d %3d %3d", &red, &green, &blue);
  struct color c1 = make_color(red, green, blue);
  printf("You have entered R:%03d G:%03d B:%03d\n", c1.red, c1.green, c1.blue);
  printf("Testing getRed function: %d\n", getRed(c1));

  printf("Enter another colour in the form RRR GGG BBB: ");
  scanf("%3d %3d %3d", &red, &green, &blue);
  struct color c2 = make_color(red, green, blue);
  bool same = equal_color(c1, c2);
  
  printf("c1 == c2 is %s\n", same ? "true": "false");

  struct color c1b = brighter(c1);
  printf("c1 brighter is R:%03d G:%03d B:%03d\n", c1b.red, c1b.green, c1b.blue);

  struct color c2d = darker(c2);
  printf("c2 darker is R:%03d G:%03d B:%03d\n", c2d.red, c2d.green, c2d.blue);
}
