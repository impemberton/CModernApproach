#include <stdio.h>
enum {NORTH = 'n', SOUTH = 's', EAST = 'e', WEST = 'w'} direction;

int main(void) 
{
  int x = 0, y = 0;
  for (;;) {
    printf("You are currently at (%d,%d)\n", x, y);
    printf("Enter a direction to travel in (n, e, s, w): ", x, y);
    scanf(" %c", &direction);
    switch (direction) {
      case NORTH:
        y--;
        break;
      case SOUTH:
        y++;
        break;
      case EAST:
        x++;
        break;
      case WEST:
        x--;
        break;
      default:
        printf("Invalid direction\n");
        break;
    }
  }
}
