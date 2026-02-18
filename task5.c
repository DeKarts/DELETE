#include <stdio.h>
#include <math.h>

int main() {
    float num1 = 12.5;
    float num2 = 2.3;
    float remainder = fmod(num1, num2);

    printf("Остаток от деления: %.2f\n", remainder);

    return 0;
}