#include <stdio.h>

int main() {
    int num1 = 25;
    int num2 = 10;
    
    int difference = num1 - num2;
    float quotient = (float)num1 / num2; 

    printf("Разность: %d\n", difference);
    printf("Частное: %.2f\n", quotient);

    return 0;
}