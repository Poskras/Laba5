//ВАРИАНТ 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x;
    double p = 0.5;
    double a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    b = exp(sqrt(fabs(x)));
    a = log(p * p + x * x * x);
    y = (a * a * a) / (b * b);
    printf("При x = %.1f значение y = %.4f\n", x, y);

    return 0;
}
