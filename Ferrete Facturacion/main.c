#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preciouno=0;
    float preciodos=0;
    float preciotres=0;
    float resultado=0;
    char operacion;

    printf("Ingrese el primer precio: ");
    scanf(" %f", &preciouno);
    printf("Ingrese el segundo precio: ");
    scanf(" %f", &preciodos);
    printf("Ingrese el tercer precio: ");
    scanf(" %f", &preciotres);
    //printf("\nIngrese el segundo precio %f", preciodos);
    //printf("\nIngrese el tercer precio %f", preciotres);

    printf ("\nSi usted desea sumar presione S,\nsi desea un promedio presione P,\nsi desea obtener el precio final presione F\n");
    scanf(" %c", &operacion);

    if(operacion=='s')
    {
        resultado=preciouno+preciodos+preciotres;
        printf ("\n La suma de los tres productos es: %.2f ", resultado);
    }

    if(operacion=='p')
    {
        resultado=(preciouno+preciodos+preciotres)/3;
        printf ("\n El promedio de los tres productos es: %.2f ", resultado);
    }

    if(operacion=='f')
    {
        resultado=(preciouno+preciodos+preciotres)*1.21;
        printf ("\n El precio final + IVA es: %.2f ", resultado);
    }



    /*printf("%c\n", operacion);
    printf("%.2f\n", preciouno);
    printf("%.2f\n", preciodos);
    printf("%.2f\n\n", preciotres);
    printf("%.2f\n", resultado);*/


    return 0;

}
