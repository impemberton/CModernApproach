#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

IDENT(foo)
// expanded guess:
// PRAGMA(ident "foo")
// #pragma ident "foo"
