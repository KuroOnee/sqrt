#include <stdio.h>
#include <locale.h>
#include "def.h"

int main()
{
	double a, b, c;
	int k;
	setlocale(LC_ALL, "Rus");
	printf("Введите a: ");
	scanf("%lf", &a);   
	printf("Введите b: ");
	scanf("%lf", &b);   
	printf("Введите c: ");
	scanf("%lf", &c);
	k = sqrtsolve(a, b, c);
	if (k == Oneroot)
		{
		printf("У уравнения 1 корень: %.2lf", x1);
		return 0;
		}
	if (k == Tworoots)
		{
		printf("У уравнения 2 корня: %.2lf %.2lf", x1, x2);
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