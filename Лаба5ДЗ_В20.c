//ВАРИАНТ20
/* Контрольные примеры :
 1) x = -3,     y = 0.0027, результат = 0.374139
 2) x = 0.0021, y = 10,     результат = 0.0000186*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, y;
    double d = 1;
    double F;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);
    F = (pow(cos(y), 3) + pow(2, x) * d) /
        (exp(y) + log(pow(sin(x), 2) + 7.4));
    printf("\nРезультат вычисления:\n");
    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    printf("F(x, y) = %.6f\n", F);

    return 0;
}
