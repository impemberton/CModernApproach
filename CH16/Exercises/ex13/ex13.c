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

// a) s.shape_kind = RECTANGLE; -- Legal
//
// b) s.center.x = 10; -- Legal
//
// c) s.height = 25; -- Not Legal - height is within s.u.rectangle
//    Fixed:
//    s.u.rectangle.height = 25;
//
// d) s.u.rectangle.width = 8; -- Legal
//
// e) s.u.circle = 5; -- Not Legal s.u.circle is type struct circle not int
//    Fixed:
//    s.u.circle.radius = 5;
//
// f) s.u.radius = 5; -- Not Legal similar to above, radius is not a member of s.u
//    Fixed:
//    s.u.circle.radius = 5;
