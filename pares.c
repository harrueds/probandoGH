#include <stdio.h>
int main()
{
    int a,b;
    printf("\nIngrese dos números enteros");
    scanf("%i %i",&a,&b);
    if(a%2 == 0 && b%2 == 0)
    {
        printf("\nLos dos números son pares\n\n");
    }
    else
    {
        printf("\nUno de los números no es par");
    }
    return 0;
}