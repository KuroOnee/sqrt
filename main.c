#include <stdio.h>
#include <locale.h>
#include <math.h>
float x1,x2;
int func(int a, int b, int c)
{
    float d;
    d = (b * b) - (4 * a * c);
    printf ("%f",d);
    if (d > 0)
    {
    x1 = (-b + sqrt(d))/ (2 * a);
    x2 = (-b - sqrt(d))/ (2 * a);
    return 1;
    }
    if (d == 0)
    {
    x1 = -b / (2 * a);
    return 2;
    }
    return 0;
}

int main()
{
    float a,b,c;
    int d;
    setlocale(LC_ALL, "Rus");
    printf("Введите a: ");
    scanf("%f",&a);   
    printf("Введите b: ");
    scanf("%f",&b);   
    printf("Введите c: ");
    scanf("%f",&c);
    d = func(a,b,c);
    printf ("%d",d);
    if (d == 2)
	{
	printf("У уравнения 1 корень: %f",x1);
	return 0;
	}
    if (d == 1)
	{
	printf("У уравнения 2 корня: %f %f",x1 ,x2);
	return 0;
	}
    if (d == 0)
	printf ("У уравнения нет корней. ");
    return 0;
}