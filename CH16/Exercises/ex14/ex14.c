#include <stdio.h>
#define RECTANGLE 0
#define CIRCLE 1

struct point { int x, y; };
struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;    
    } circle;
  } u;
} s;

int get_area(struct shape s) 
{
  if (s.shape_kind == RECTANGLE) 
    return s.u.rectangle.height * s.u.rectangle.width;
  if (s.shape_kind == CIRCLE)
    return s.u.circle.radius * s.u.circle.radius * 3.14;
  return 0;
}

struct shape move(struct shape s, int x, int y) 
{
  s.center.x += x;
  s.center.y += y;
  return s;
}

struct shape scale(struct shape s, double c)
{
  if (s.shape_kind == RECTANGLE) {
    s.u.rectangle.height *= c;
    s.u.rectangle.width *= c;
  }
  if (s.shape_kind == CIRCLE) {
    s.u.circle.radius *= c;
  }
  return s;
}

int main(void)
{
  struct shape s;
  printf("Is your shape a rectangle or circle (0 or 1): ");
  scanf("%d", &s.shape_kind);
  printf("Enter the center coordinates (x,y): ");
  scanf("%d,%d", &s.center.x, &s.center.y);
  if (s.shape_kind == RECTANGLE) {
    printf("Enter the width and height of the rectangle (WxH): ");
    scanf("%dx%d", &s.u.rectangle.width, &s.u.rectangle.height);
  }
  if (s.shape_kind == CIRCLE) {
    printf("Enter the radius of the circle: ");
    scanf("%d", &s.u.circle.radius);
  }
  printf("The area of your shape is %d units\n", get_area(s));

  int x, y, c;
  printf("Enter x and y values to move your shape by (x,y): ");
  scanf("%d,%d", &x, &y);
  struct shape moved_s = move(s, x, y);
  printf("The center of your shape is now at (%d,%d).\n", moved_s.center.x, moved_s.center.y);

  printf("Enter a factor to scale your shape by: ");
  scanf("%d", &c);
  struct shape scaled_s = scale(s, c);
  if (s.shape_kind == RECTANGLE) 
    printf("Your rectangle is now %dx%d units and has an area of %d units^2\n", 
           scaled_s.u.rectangle.width,
           scaled_s.u.rectangle.height,
           get_area(scaled_s)
    );
  if (s.shape_kind == CIRCLE) {
    printf("Your circle now has a radius of %d units and has an area of %d units^2\n", 
           scaled_s.u.circle.radius,
           get_area(scaled_s)
    );
  }

}
