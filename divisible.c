#include <stdio.h>
int main()
{
    int a,b;
    printf("\nIngrese el número:\na: ");
    scanf("%i",&a);
    if(a%b==0)
    {
        printf("\nEl número %i es divisible por el número %i\n",a,b);
    }
    else
    {
        printf("\n %i no es divisible por %i\n",a,b);
    }
    return 0;
}