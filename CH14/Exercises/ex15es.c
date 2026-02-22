#include <stdio.h>
#define SPANISH 


int main()
{
#ifdef ENGLISH
  puts("Insert Disk 1");
#endif
#ifdef FRENCH
  puts("Inserez Le Disque 1");
#endif
#ifdef SPANISH
  puts("Inserte El Disco 1");
#endif
}
