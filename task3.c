#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = malloc(51);
    scanf("%50s", s);
    printf("%s\n", s);
    free(s);
    return 0;
}
