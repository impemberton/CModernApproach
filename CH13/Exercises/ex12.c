#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void) {
    char str[10], ext[10];
    printf("Enter file name: ");
    scanf("%s", str);
    get_extension(str, ext);
    printf("extension: %s\n", ext);
    
}

void get_extension(const char *file_name, char *extension) {
    while (*file_name != '\0')
        if (*file_name++ == '.') {
            strcpy(extension, file_name);
            return;
        }
    strcpy(extension, "\0");
}
