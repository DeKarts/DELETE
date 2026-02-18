#include <stdio.h>

int main() {
    int month, year;
    
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    printf("Введите год: ");
    scanf("%d", &year);

    int days;

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month >= 1 && month <= 12) {
        days = 31;
    } else {
        printf("Некорректный номер месяца\n");
        return 1;
    }

    printf("В месяце %d: %d дней\n", month, days);

    return 0;
}