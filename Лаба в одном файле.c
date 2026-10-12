#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

#define M_PI 3.14159265358979323846

int main()
{
    task1();
    task2();
    task3();
    dz();

    return 0;
}

int task1()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double gr;
    double rad;
    double result;

    printf("Угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;
    result = sin(rad);
    printf("Синус угла %.2f градусов = %.6f\n", gr, result);

    return 0;
}

int task2()
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

int task3()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int A, B, C;
    int uslovie_a, uslovie_b;
    printf("Введите целые значения A, B и C: \n");
    scanf("%d %d %d", &A, &B, &C);
    uslovie_a = (A % 2 == 0) != (B % 2 == 0);
    uslovie_b = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);
    printf("\nа) Условие выполнено (1 - да, 0 - нет): %d\n",
        uslovie_a);
    printf("б) Условие выполнено (1 - да, 0 - нет): %d\n",
        uslovie_b);
    return 0;
}

int dz()
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