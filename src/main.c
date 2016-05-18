#include <stdio.h>
#include <locale.h>
#include "def.h"

int main()
{
	float a, b, c, x1, x2;
	short k;
	setlocale(LC_ALL, "Rus");
	printf("Введите a: ");
	scanf("%f", &a);   
	printf("Введите b: ");
	scanf("%f", &b);   
	printf("Введите c: ");
	scanf("%f", &c);
	k = sqrtsolve(a, b, c, &x1, &x2);
	if (k == Oneroot)
		{
		printf("У уравнения 1 корень: %.2f", x1);
		return 0;
		}
	if (k == Tworoots)
		{
		printf("У уравнения 2 корня: %.2f %.2f", x1, x2);
		return 0;
		}
	if (k == Noroots)
		{
		printf ("У уравнения нет корней. ");
		return 0;
		}
	printf("Что-то пошло не так! Или вы меня обманываете? =)");
	return 0;
}