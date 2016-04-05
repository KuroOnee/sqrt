#include <stdio.h>
#include <locale.h>
#include <math.h>
#define nroots 0
#define 1root 1
#define 2roots 2
#define error -1
float x1, x2;
int sqrtsolve(float a, float b, float c)
{
    float d;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    return 2roots;
    }
    if (d == 0)
    {
    x1 = -b / (2 * a);
    return 1root;
    }
    return nroots;
}

int main()
{
    float a, b, c;
    short k;
    setlocale(LC_ALL, "Rus");
    printf("Введите a: ");
    scanf("%f", &a);   
    printf("Введите b: ");
    scanf("%f", &b);   
    printf("Введите c: ");
    scanf("%f", &c);
    k = sqrtsolve(a, b, c);
    if (k == 1root)
	{
	printf("У уравнения 1 корень: %.2f", x1);
	return 0;
	}
    if (k == 2roots)
	{
	printf("У уравнения 2 корня: %.2f %.2f", x1, x2);
	return 0;
	}
    if (k == nroots)
	{
	printf ("У уравнения нет корней. ");
	return 0;
	}
    if (k == error)
	printf ("Что-то пошло не так!");
    return -1;
}