#include <stdio.h>
#include <stdlib.h>

   float largo;
   float ancho;
   float radio;
   float perimetro;
   float superficie;
   float cantcal=0;
   float cantcemento=0;
   float cantalambre=0;
   char eleccion=0;
   float resultado;

int main()
{

   printf ("Bienvenido, seleccione a continuacion la operacion que desea realizar:\nA. Mostrar la cantidad de alambre a comprar para un terreno rectangular usando tres hilos de alambre\nB. Mostrar la cantidad de alambre para un terreno circular usando tres hilos de alambre.\nC. Mostrar cuantas bolsas de cemento y cal se necesitan para las medidas de un terreno rectangular.\n");
   scanf(" %c", &eleccion);


while (eleccion != 'a' && eleccion !='b' && eleccion!='c')

   {

       printf("Incorrecto, seleccione la operacion que desea realizar: ");
       scanf(" %c", &eleccion);
   }
   switch (eleccion)
        {
        case 'a':
        opcionA();
        break;

        case 'b':
        opcionB();
        break;

        case 'c':
        opcionC();
        break;
        }

    return 0;
}

int opcionA()
{
        printf ("\nIngrese el largo del terreno en metros: ");
        scanf("%f", &largo);
        printf ("\nIngrese el ancho del terreno en metros: ");
        scanf("%f", &ancho);
        perimetro=largo*2+ancho*2;
        cantalambre=perimetro*3;
        printf ("Usted necesita comprar %.2f metros de alambre", cantalambre);

        //return opcionA();
};

int opcionB()
{
        printf ("\nIngrese el radio del terreno en metros: ");
        scanf("%f", &radio);
        perimetro=2*radio*3,14;
        cantalambre=perimetro*3;
        printf ("Usted necesita comprar %.2f metros de alambre", cantalambre);

        //return opcionB();
};

int opcionC()
{
        printf ("\nIngrese el largo del terreno en metros: ");
        scanf("%f", &largo);
        printf ("\nIngrese el ancho del terreno en metros: ");
        scanf("%f", &ancho);
        superficie=largo*ancho;
        cantcal=superficie*3;
        cantcemento=superficie*2;

        printf ("Usted necesita comprar %.2f bolsas de cal",cantcal);
        printf (" y %.2f bolsas de cemento.",cantcemento);
};
