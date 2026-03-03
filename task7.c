#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) a[i] = i;
    a = realloc(a, 10 * sizeof(int));
    for (int i = 5; i < 10; i++) a[i] = i;
    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}
