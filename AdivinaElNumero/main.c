#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int funcionBienvenida();
int funcionAleatoria();
int comparaNumeros();
int mensajeSalida();
int numeroAleatorio;
int contador=1;
int numeroIngresado;
char respuesta='s';

int main()
{
    while (respuesta=='s')
    {
    funcionAleatoria();
    numeroAleatorio=funcionAleatoria();
    //printf("%d", numeroAleatorio);

    funcionBienvenida();

    comparaNumeros();

    mensajeSalida();
    }

    return 0;
}

int funcionBienvenida()
{
    printf("\nBienvenido, ingrese un n�mero de 1 a 100\n");
    scanf("%d", &numeroIngresado);

    return numeroIngresado;
}
int funcionAleatoria()
{
    int numeroAleatorio;

    srand(time(NULL));
    numeroAleatorio=1+rand()%((100+1)-1);

    return numeroAleatorio;

}

int comparaNumeros()
{
    while (numeroAleatorio != numeroIngresado)
    {
        if (numeroIngresado>numeroAleatorio)
        {
            printf("\nEl numero ingresado es superior al generado, reingrese\n");
        }
        else
        {
            printf("\El numero ingresado es inferior al generado, reingrese\n");
        }
        scanf("%d", &numeroIngresado);
        contador++;
    }
}

int mensajeSalida()
{
    switch(contador)
    {
       case 1:
    printf("Usted es un psiquico. Adivino en 1 intento.");
    break;
case 2:
    printf("Excelente percepcion. Usted Adivin� en 2 intentos.");
    break;
case 3:
    printf("Esto es suerte. Usted adivin� en 3 intentos.");
    break;
case 4:
    printf("Excelente t�cnica. Usted adivin� en 4 intentos.");
    break;
case 5:
    printf("Usted est� en la media. Adivin� en 5 intentos.");
    break;
case 6:
    printf("Falta t�cnica. Usted adivin� en %d intentos.", contador);
    break;
case 7:
    printf("Falta t�cnica. Usted adivin� en %d intentos.", contador);
    break;
case 8:
    printf("Falta t�cnica. Usted adivin� en %d intentos.", contador);
    break;
case 9:
    printf("Falta t�cnica. Usted adivin� en %d intentos.", contador);
    break;
case 10:
    printf("Falta t�cnica. Usted adivin� en %d intentos.", contador);
    break;
default:
    printf("Afortunado en el amor. Usted adivin� en %d intentos.", contador);
    }

printf("\n Desea volver a jugar? (S/N):");
respuesta=getche();

}
