#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* create_array(int n) {
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) a[i] = rand() % 100;
    return a;
}

int main() {
    srand(time(0));
    int *a = create_array(10);
    for (int i = 0; i < 10; i++) printf("%d ", a[i]);
    free(a);
    return 0;
}
