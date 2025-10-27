#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	//Садовод-робот сажает семена в лунки. Лунка считается "идеальной" для посадки,
	// если все три измеренных параметра кислотности почвы (A, B, C) кратны трем. Запишите условие для "идеальной" лунки.
    int a, b,c;

    int l;
    printf("=== Идеальная лунка? ===\n");

    printf("Введите три целых числа (a,b и c): ");
    scanf("\n%d \n%d \n%d", &a, &b, &c);

    l = (a % 3 == 0 && b % 3 == 0 && c % 3 == 0);

    printf("Доступ разрешен (1 - да, 0 - нет): %d\n", l);
}
