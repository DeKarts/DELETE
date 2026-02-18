#include <stdio.h>

int main() {
    int num = 7;

    switch (num) {
        case 3:
        case 7:
        case 9:
            printf("Значение %d принадлежит набору [3, 7, 9]\n", num);
            break;
        default:
            printf("Значение %d не принадлежит набору [3, 7, 9]\n", num);
            break;
    }

    return 0;
}