#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    char a = '!';
    int b = 2;
    float c = 3.14f;
    double d = 5e-12;
    puts("Введите символ:");
    scanf(" %c", &a);
    puts("Введите целое число:");
    scanf("%d", &b);
    puts("Введите вещественное число (float):");
    scanf("%f", &c);
    puts("Введите вещественное число (double):");
    scanf("%lf", &d);

    printf("\nВсе значения:\n c='%c'\n i=%d\n f=%.2f\n d=%.12f\n", a, b, c, d);

    printf("Целая часть: %d\n", (int)c);
    printf("дробная часть: %.5f\n", c - (int)c);

    printf("Введено число в десятичной системе счисления: %d\n", a);
    printf("Десятичный код: %d\n", a);
   

    printf("Введено число в шестнадцатиричной системе счисления: %X\n", a);
    printf("Десятичный код: %X\n", a);

    printf("Введено дисятичное число: %d\n ", 1 / b);

  

}