#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 1;
    int n;
    int lim;

    printf("Cuantos terminos de la sucesion fibonacci quieres: ");

    scanf("%i", &lim);

    printf("Numero 1: %i\n", a);

    for(int i=0; i<(lim-1); i++)
    {
        n = a + b;
        printf("Numero %i: %i\n", i+2, n);
        b = a;
        a = n;
    }

    return 0;
}
