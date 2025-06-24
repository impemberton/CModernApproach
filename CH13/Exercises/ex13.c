#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void) {
    char domain[100], index_url[100];
    printf("Enter a domain (e.g. google.com): ");
    scanf("%s", domain);
    build_index_url(domain, index_url);
    printf("%s\n", index_url);
}

void build_index_url(const char *domain, char *index_url) {
    char url[100] = "http://www.";
    strcat(url, domain);
    strcat(url, "/index.html");
    strcpy(index_url, url);
}
