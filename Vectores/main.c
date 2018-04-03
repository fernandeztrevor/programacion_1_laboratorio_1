#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define TAM 5

int main()
{
 int vector [TAM] = ;
 int i;
 int maximo;
 int flag = 0;
 int eleccion;
 int Salir;
 float calcularPromedio(int, int);
 float promedio;
 int suma;
int posicion;
int numero;
int seguir;
int contadorIngreso=0;


for(i=0; i<TAM; i++)
{
    vector[i] = 0;//ilogico
}

 //while(continuar=='s')
 do
 {


 printf("\nSeleccione la opcion que desea realizar:\n1- Ingresar numeros\n2- Ver los numeros en el orden ingresado\n3- Ver los numeros en el orden inverso\n4- Ver el listado de numeros pares\n5- Ver el maximo ingreso\n6- Ver en que posición se ingreso el maximo\n7- Mostrar el promedio de los numeros\n9-Salir\n");
 scanf("%d", &eleccion);


 switch(eleccion)
 {
 case 1:
     {//for(i=0; i<TAM; i++ )
         do

        {
        printf("\nIngrese posicion: ");
        scanf("%d", &posicion);


        printf("\nIngrese el numero: ");
        scanf("%d", &numero);
        vector[posicion-1] = numero;
        contadorIngreso++;
        printf("desea continuar ingresando?");
        seguir = getche();

        }while(seguir=='s');
 }
 break;
 case 2:
    {
       printf("Listado en orden de ingreso \n", vector[i]);
    for(i=0; i<TAM; i++)
 {
     if(vector[i] != 0)
     {
       printf("%d\n", vector[i]);
     }

 }
    }
    break;
 case 3:
{
     printf("Listado inverso \n", vector[i]);
 for(i=TAM-1; i>=0; i--)
 {
     printf("%d\n", vector[i]);
 };
}
    break;
 case 4:
     {
         printf("Listado de los numeros pares:");

        for (i=0; i<TAM; i++)
        {
            if(vector[i]%2 ==0)
            {
            printf("%d\n", vector[i]);
            }
        };
    }
     break;

 case 5:
    {
       maximo=vector[0];

 for(i=1; i<TAM; i++)
 {
     if(flag==0 || vector[i]>maximo)
     {
         maximo=vector[i];
     }
 }
 printf("El valor maximo es %d\n ", maximo);

    }
    break;

 case 6:
    {
         for(i=0; i<TAM; i++)
 {
     if(vector[i] == maximo)
     {
         printf("Se encontró en la posición  %d\n", i+1);
     }
 }
    }
    break;
 case 7:
    {
    for (i=0; i< TAM; i++)
    {
        suma=suma+vector[i];
    };

    promedio=calcularPromedio(suma, TAM);
    printf("El promedio es %f", promedio);

     //float calcularPromedio(int suma, int cantidad);

    }
    break;
 }
 }

while(eleccion!=9);

 /*
 for(i=0; i<TAM; i++ )
 {
     printf("ingrese el %d numero: ", vector[i]);
     scanf("%d", &vector[i]);
 };

 printf("Listado en orden de ingreso \n", vector[i]);
 for(i=TAM; i<TAM; i++)
 {
     printf("%d\n", vector[i]);
 };

 printf("Listado inverso \n", vector[i]);
 for(i=TAM-1; i>TAM; i--)
 {
     printf("%d\n", vector[i]);
 };

 printf("Listado de los numeros pares:");

 for (i=0; i<TAM; i++)
 {
     if(vector[i]%2 == 0)
     {
         printf(printf("%d\n", vector[i]));
     }
 };

 maximo=vector[0];

 for(i=1; i<TAM; i++)
 {
     if(flag==0 || vector[i]>maximo)
     {
         maximo=vector[i];
     }
 }
 printf("El valor maximo es %d\n y se encontró en la posición ", maximo);

 for(i=0; i<TAM; i++)
 {
     if(vector[i] == maximo)
     {
         printf("%d\n", i+1);
     }
 }


*/

    return 0;
}


float calcularPromedio(int suma, int cantidad)
{
  float prom;

  prom=(float)suma/cantidad;

  return prom;
}
