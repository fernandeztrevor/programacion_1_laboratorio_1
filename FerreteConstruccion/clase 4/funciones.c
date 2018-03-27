#include "funciones.h"

int pedirEntero(char texto[], int min, int max)
{
    int retorno;

    printf("%s", texto);
    scanf("%d", &retorno);
   /* while (retorno < min || retorno > max)
    {
        printf("Error!!! Reingrese\n%s", texto);
        scanf("%d", &retorno);
    }*/
    retorno=validarEntero(retorno, min, max);
    return retorno;
}



int validarEntero(int dato, int min, int max)
{
      while (dato < min || dato > max)
    {
        printf("Error!!! Reingrese\n%s");
        scanf("%d", &dato);
    }
    return dato;
}

int factorial(int numero)
