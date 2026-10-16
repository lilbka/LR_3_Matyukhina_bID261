#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define D 2.54
#define P 2.32166
#define S 2.7076


int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "RUS");
    nums();
    dyms();
    matrs();

    return 0;

}

int nums()
{
    int n;
    printf("введите число:");
    scanf("%d", &n);
    printf("введено число %d\n", n);
    int f;
    printf("введите второе число:");
    scanf("%d", &f);
    printf("введено число %d\n", f);
    printf("сумма %d, разность %d, произведение %d, частное %f, остаток %d\n", n + f, n - f, n * f, (float)f / n, f % n);
}

int dyms()
{
    int d;
    printf("введите данные дл€ расчЄта:");
    scanf("%d", &d);
    printf("\n%d дюймов Ц это %.1f см", d, D * d);
    printf("\n%d испанских дюймов Ц это %.1f см", d, P * d);
    printf("\n%d старолитовских дюймов Ц это %.1f см\n", d, S * d);
}

int matrs()
{
    int a;
    int b;
    printf("введите число a:");
    scanf("%d", &a);
    printf("введите число b:");
    scanf("%d", &b);

    printf("----------------------------------------------");
    printf("\n|   %5s       |   %5s        |   %5s  |", "a*b", "a+b", "a-b");
    printf("\n---------------------------------------------");
    printf("\n| %4d  *  %-4d | %3d  +  %-5d | %3d - %-4d|", a, b, a, b, a, b);
    printf("\n---------------------------------------------");
    printf("\n| %7d       | %8d      |  %7d  |", a * b, a + b, a - b);
    printf("\n----------------------------------------------");

}
