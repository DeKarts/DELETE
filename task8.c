#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int **a = malloc(5 * sizeof(int*));
    for (int i = 0; i < 5; i++) a[i] = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            a[i][j] = rand() % 100;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%3d", a[i][j]);
        printf("\n");
    }
    for (int i = 0; i < 5; i++) free(a[i]);
    free(a);
    return 0;
}
