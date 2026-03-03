#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *a = malloc(10 * sizeof(int));
    int *b = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) a[i] = i;
    memcpy(b, a, 10 * sizeof(int));
    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\n");
    for (int i = 0; i < 10; i++) printf("%d ", b[i]);
    free(a); free(b);
    return 0;
}
