#include <stdio.h>

int main() {
    int grade;
    printf("Введите оценку (0-100): ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf("Excellent\n");
    } else if (grade >= 75 && grade <= 89) {
        printf("Good\n");
    } else if (grade >= 50 && grade <= 74) {
        printf("Satisfactory\n");
    } else if (grade >= 0 && grade <= 49) {
        printf("Unsatisfactory\n");
    } else {
        printf("Некорректная оценка\n");
    }

    return 0;
}