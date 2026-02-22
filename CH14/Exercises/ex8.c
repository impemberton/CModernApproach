#define STRINGIZE(x) #x
#define EXPAND(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND(__LINE__) " of file " __FILE__)

const char *str = LINE_FILE;
