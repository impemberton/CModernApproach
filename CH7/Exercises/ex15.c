#include <stdio.h>

int main(void) {
    typedef char Int8;
    typedef short Int16;
    typedef int Int32;

    Int8 c;
    Int16 s;
    Int32 i;

    printf("Size of: Int8: %lu, Int16: %lu, Int32: %lu\n", sizeof c, sizeof s, sizeof i);
}