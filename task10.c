#include <stdio.h>
#include <math.h>

int main() {
    int x = 3;
    int y = 4;

    float distance = sqrt((float)(x * x) + (float)(y * y));

    printf("Координаты точки: (%d, %d)\n", x, y);
    printf("Расстояние от начала координат: %.2f\n", distance);

    return 0;
}