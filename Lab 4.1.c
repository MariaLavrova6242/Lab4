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
    puts("������� ������:");
    scanf(" %c", &a);
    puts("������� ����� �����:");
    scanf("%d", &b);
    puts("������� ������������ ����� (float):");
    scanf("%f", &c);
    puts("������� ������������ ����� (double):");
    scanf("%lf", &d);

    printf("\n��� ��������:\n c='%c'\n i=%d\n f=%.2f\n d=%.12f\n", a, b, c, d);

    printf("����� �����: %d\n", (int)c);
    printf("������� �����: %.5f\n", c - (int)c);

    printf("������� ����� � ���������� ������� ���������: %d\n", a);
    printf("���������� ���: %d\n", a);
   

    printf("������� ����� � ����������������� ������� ���������: %X\n", a);
    printf("���������� ���: %X\n", a);

    printf("������� ���������� �����: %d\n ", 1 / b);

  

}