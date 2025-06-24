#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void) {
    char *name, *ext;
    printf("Enter a file name: ");
    scanf("%s", name);
    printf("Enter the file extension to test: ");
    scanf("%s", ext);
    printf("%d\n", test_extension(name, ext));
}

bool test_extension(const char *file_name, const char *extension) {

    while (*file_name) {
        if (*file_name++ == '.'){
            for (char *p = file_name; *p; p++) {
                 *p = tolower(*p);
            }
            for (char *q = extension; *q; q++) {
                 *q = tolower(*q);
            }
            return strcmp(file_name, extension) == 0;
        }
    }
    return false;
}
