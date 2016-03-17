#include <stdio.h>
#include <locale.h>

int sqrt(int a, int b, int c, int* x, int* y)
{
    
}
int main()
{
    int a,b,c,x1,x2;
    setlocale(LC_ALL, "Rus");
    printf("Введите a: ");
    scanf("%d",&a);   
    printf("Введите b: ");
    scanf("%d",&b);   
    printf("Введите c: ");
    scanf("%d",&c);
    sqrt(a,b,c,x1,x2);
    return 0;
}