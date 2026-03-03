#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copy_str(const char *s) {
    char *c = malloc(strlen(s) + 1);
    strcpy(c, s);
    return c;
}

int main() {
    char *s = copy_str("Hello");
    printf("%s\n", s);
    free(s);
    return 0;
}
