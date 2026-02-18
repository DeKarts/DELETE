#include <stdio.h>

int main() {
    float a = 20.0f;
    float b = 4.0f;
    float c = 6.0f;
    float d = a + c;

    printf("a: %.1f\n", a);
    printf("b: %.1f\n", b);
    printf("c: %.1f\n", c);
    printf("d (a + c): %.1f\n", d);

    return 0;
}