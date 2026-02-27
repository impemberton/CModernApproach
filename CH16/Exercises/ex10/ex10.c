#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int get_area(struct rectangle r) 
{
  int width = r.lower_right.x - r.upper_left.x,
      height = r.lower_right.y - r.upper_left.y;

  return width * height;
}

struct point get_center(struct rectangle r)
{
  return (struct point) {
    (r.upper_left.x + r.lower_right.x) / 2,
    (r.upper_left.y + r.lower_right.y) / 2
  };
}

struct rectangle move(struct rectangle r, int x, int y) 
{
  r.upper_left.x += x;
  r.lower_right.x += x;
  r.upper_left.y += y;
  r.lower_right.y += y;
  return r;
}

bool contains(struct rectangle r, struct point p) 
{
  bool 
    within_x = p.x >= r.upper_left.x && p.x <= r.lower_right.x,
    within_y = p.y >= r.upper_left.y && p.y <= r.lower_right.y;
  return within_x && within_y;
}


int main(void) 
{
  struct point ul, lr, c;

  printf("Enter upper left coordinates in the form x,y: ");
  scanf("%d,%d", &ul.x, &ul.y);


  printf("Enter lower right coordinates in the form x,y: ");
  scanf("%d,%d", &lr.x, &lr.y);

  struct rectangle r = {ul, lr};
  printf("The area is %d units.\n", get_area(r));

  c = get_center(r);
  printf("The centre is at (%d,%d).\n", c.x, c.y);

  int x, y;
  printf("Enter x and y to move rectangle (x,y): ");
  scanf("%d,%d", &x, &y);
  struct rectangle moved_r = move(r, x, y);

  printf("The moved rectangle is now at upperleft(%d,%d), lowerright(%d,%d)\n",
         moved_r.upper_left.x, moved_r.upper_left.y,
         moved_r.lower_right.x, moved_r.lower_right.y
  );
  
  printf("Enter coordinates for a point (x,y): ");
  scanf("%d,%d", &x, &y);

  printf("The point is %s the rectangle.\n", contains(r, (struct point) {x,y}) ? "in" : "not in"); 
}
