#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cantidad;
int precio=35;
char marca;
int eleccionMarca;
float precioAcumulado;
float descuento;
float IIBB;


int main()
{
   printf("Bienvenido, ingrese la cantidad de lamparas que desea comprar: ");
   scanf("%d", &cantidad);
   printf("\nAhora ingrese la marca:\nA - ArgentinaLuz\nB - FelipeLamparas\nC - JeLuz\nD - HazIluminacion\nE - Osram\n");
   marca=getche();

   preciototal();

   return 0;
}

int preciototal()
{
    if(cantidad >= 6)
    {
        precioAcumulado=cantidad*precio*0.5;
    };
    if (cantidad==5)
    {
        if(marca=='A')
        {
           precioAcumulado=cantidad*precio*0.6;
        }
        else
        {
            precioAcumulado=cantidad*precio*0.7;
        }
    }

    if (cantidad==4)
    {
        if (marca=='A' || marca=='B')
        {
        precioAcumulado=cantidad*precio*0,75;
        }
        else
        {
          precioAcumulado=cantidad*precio*0,80;
        };
    }
    if (cantidad==3)
    {
        if (marca=='A')
        {
            precioAcumulado=cantidad*precio*0,85;
        };
        if (marca=='B')
        {
            precioAcumulado=cantidad*precio*0,90;
        }
        else
        {
            precioAcumulado=cantidad*precio*0,95;
        };

    }
    if (cantidad<3)

    {
        precioAcumulado=cantidad*precio;
    };

   if ( precioAcumulado > 120 )
    {
        IIBB=precioAcumulado*0.10;
        precioAcumulado=precioAcumulado*1.10;
        printf("\nUsted debe abonar %.2f",precioAcumulado);
        printf("\nIIBB Usted pago %.2f", IIBB);
    }
    else
    {
        printf("\nUsted debe abonar %.2f",precioAcumulado);
    };
return 0;
}

