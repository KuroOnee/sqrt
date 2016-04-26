#include <stdio.h>
#include <locale.h>
#include <math.h>
#define Noroots 0
#define Oneroot 1
#define Tworoots 2
int sqrtsolve(float a, float b, float c, float* f, float* e)
{
	float d, x1, x2;
	if ((a == 0) && (b == 0) && (c == 0))
		 return -1;
	d = (b * b) - (4 * a * c);
	if (d > 0)
		{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		*f = x1;
		*e = x2;
		return Tworoots;
		}
	if (d == 0)
		{
		x1 = -b / (2 * a);
		f = &x1;
		return Oneroot;
	}
	return Noroots;
}

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