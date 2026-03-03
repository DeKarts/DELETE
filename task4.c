#include <stdio.h>
#include <stdlib.h>

int main() {
    float *a = calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++) printf("%f ", a[i]);
    free(a);
    return 0;
}
