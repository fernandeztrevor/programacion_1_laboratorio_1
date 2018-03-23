#include <stdio.h>
#include <stdlib.h>

int main()
{
   float largo, ancho, radio, perimetro, superficie;
   float cantcal=0;
   float cantcemento=0;
   float cantalambre=0;
   char eleccion;

   printf ("Bienvenido, seleccione a continuacion la operacion que desea realizar:\nA. Mostrar la cantidad de alambre a comprar para un terreno rectangular usando tres hilos de alambre\nB. Mostrar la cantidad de alambre para un terreno circular usando tres hilos de alambre.\nC. Mostrar cuantas bolsas de cemento y cal se necesitan para las medidas de un terreno rectangular.\n");
   scanf(" %c", &eleccion);

    printf("\n\n %c", eleccion);

    while (eleccion != 'a' || 'b' || 'c')

   {
       //printf(" leccion en while es: \n %c", eleccion);

       printf("Incorrecto, seleccione la operacion que desea realizar: ");
       scanf(" %c", &eleccion);
   }



   if(eleccion=='a')
   {
       printf ("\nIngrese el largo del terreno en metros: ");
        scanf("%f", &largo);
        printf ("\nIngrese el ancho del terreno en metros: ");
        scanf("%f", &ancho);
        perimetro=largo*2+ancho*2;
        cantalambre=perimetro*3;
        printf ("Usted necesita comprar %.2f metros de alambre", cantalambre);
   }
   if(eleccion=='b')
   {
       printf ("\nIngrese el radio del terreno en metros: ");
        scanf("%f", &radio);
        perimetro=2*radio*3,14;
        cantalambre=perimetro*3;
        printf ("Usted necesita comprar %.2f metros de alambre", cantalambre);
   }
   if(eleccion=='c')
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

        //printf("%f", cantcemento);
        /*



        printf ("Usted necesita comprar %.2f bolsas de cal y %.2f bolsas de cemento."), cantcal, cantcemento/*(" y %.2f bolsas de cemento."), cantcemento;
        */
   }


   /*printf ("\nIngrese el largo del terreno: %f");
   scanf("%f", &largo);
   printf ("\nIngrese el ancho del terreno: %f");
   scanf("%f", &ancho);*/



    return 0;
}
