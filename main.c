#include <stdio.h>
#include <locale.h>
#define n 100
int main()
{
    char s[100];
    setlocale(LC_ALL, "Rus");
    printf("Введите уравнение: ");
    fgets(s,n,stdin);
    return 0;
}