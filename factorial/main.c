#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ingreso;
    int acumulador=1;
    int i;

    scanf("%i", &ingreso);



    for(i=ingreso;i >= 1 ;i--)
    {
        acumulador=acumulador* i;
    };
    printf("%i", acumulador);

    return 0;
}
