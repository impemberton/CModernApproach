#include <stdio.h>

void remove_filename(char *url);

int main(void) {
    char url[100];
    printf("Enter a url: ");
    scanf("%s", url);
    remove_filename(url);
    printf("%s\n", url);
}

void remove_filename(char *url) {
    char *last_slash;
    while (*url++)
        if (*url == '/')
            last_slash = url;
    *last_slash = '\0';
}
