#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int **a = malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) a[i] = malloc(n * sizeof(int));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 100;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%3d", a[i][j]);
        printf("\n");
    }
    for (int i = 0; i < m; i++) free(a[i]);
    free(a);
    return 0;
}
