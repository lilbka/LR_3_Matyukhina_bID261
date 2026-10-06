#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() //вариант 18
{
    setlocale(LC_ALL, "RUS");
    double a, b, c;
    printf("введите первый катет a: ");
    puts;
    scanf("%lf", &a);
    printf("введите второй катет b: ");
    puts;
    scanf("%lf", &b);
    c = sqrt(a * a + b * b);
    printf("для прямоугольного треугольника с катетами a = %.2f и b = %.2f, гипотенуза c равна %.2f\n", a, b, c);
}