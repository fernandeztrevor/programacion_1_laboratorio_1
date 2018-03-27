#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int valor=5;
    int factorial=1;


    for(int i = valor; i>= 1; i--)
    {
        factorial=factorial * i;
    };

    printf("El factorial de %d es: %d", valor, factorial);

    return 0;
}
*/

int factorial (int numero)
{
    int numero=5;
    int retorno;
    if(numero==0)
    {
        retorno=1;
    }
    else
    {
        retorno=numero*factorial(numero-1);
    }
}
