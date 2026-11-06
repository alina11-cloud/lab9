
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");

    nom11();
    nom12();
    nom13();
    nom2();
    homework();

    return 0;
}

int nom11() {
    printf("Полная таблица умножения:\n\n");

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

int nom12() {
    printf("Левый нижний треугольник:\n\n");

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

int nom13() {
    printf("Индивидуальный вариант 6:\n\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int nom2() {
    long long N;
    int digit, sum = 0;
    printf("Введите целое число:\n");
    scanf("%lld", &N);

    if (N < 0) {
        N = -N;
    }

    while (N > 0) {
        digit = N % 10;

        if (digit >= 7) {
            sum += digit;
        }

        N = N / 10;
    }

    printf("Сумма цифр больше или равных 7 = %d\n", sum);
}
// вар 6
int homework() {
    int h;
    char symbol;

    printf("Равнобедренный треугольник\n");

    printf("Введите высоту треугольника h:\n");
    scanf("%d", &h);

    if (h <= 0) {
        printf("Ошибка! Высота должна быть больше 0.\n");
        return;
    }

    printf("Введите символ заполнения:\n");
    scanf(" %c", &symbol);

    for (int i = 0; i < h; i++) {

        for (int j = 0; j < h - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", symbol);
        }

        printf("\n");
    }
}
