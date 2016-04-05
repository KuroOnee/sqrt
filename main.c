#include <stdio.h>
#include <locale.h>
#include <math.h>
float x1, x2;
int sqrtsolve(float a, float b, float c)
{
    float d;
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    return 2;
    }
    if (d == 0)
    {
    x1 = -b / (2 * a);
    return 1;
    }
    return 0;
}

int main()
{
    float a,b,c;
    short d;
    setlocale(LC_ALL, "Rus");
    printf("Введите a: ");
    scanf("%f", &a);   
    printf("Введите b: ");
    scanf("%f", &b);   
    printf("Введите c: ");
    scanf("%f", &c);
    d = sqersolve(a, b, c);
    if (d == 1)
	{
	printf("У уравнения 1 корень: %.2f", x1);
	return 0;
	}
    if (sqrtsolve(a, b, c) == 2)
	{
	printf("У уравнения 2 корня: %.2f %.2f", x1, x2);
	return 0;
	}
    if (sqrtsolve(a, b, c) == 0)
	printf ("У уравнения нет корней. ");
    return 0;
}