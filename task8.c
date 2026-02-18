#include <stdio.h>

int main() {
    int x = 20;
    int y = 4;

    int diff = x - y;
    int prod = x * y;
    float quot = (float)x / y;

    printf("Разность: %d\n", diff);
    printf("Произведение: %d\n", prod);
    printf("Частное: %.2f\n", quot);

    return 0;
}