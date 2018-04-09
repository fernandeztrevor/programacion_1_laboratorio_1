#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[100]="chau";// siempre almacena uno menos de los que dice porque el ultimo lo usa para poner \0 que marca la finalización
    //palabra='j'; no se puede
    //if(palabra==perro) tampoco, porque no es un tipo de dato
    char palabra2[100]="Hola";

    int comparar;
    int cantidad;

    //printf("Ingrese una palabra: ");
    //fflush(stdin);
    //scanf("%s", &palabra); si pones palabras con espacio toma solo la primera
    //gets(palabra);//no hace falta poner el &, sabe que va a leer una palabra
    //gets(palabra2);
    //printf("La palabra es %s", palabra);
    //cantidad = strlen(palabra); //strlen cuenta la cantidad de caracteres ingresados de una cadena y devuelve un numero entero
    //printf("Tiene %d caracteres.", cantidad);

   //comparar=strcmp(palabra, palabra2); //compara dos palabras, devuelve 0 cuando las dos cadenas son iguales, sino devuelve 1 o -1, tiene en cuenta las mayusculas y minusculas
    //si no quiero que tenga en cuenta las mayusculas o minusculas uso la funcion stricmp
    //printf("%d", comparar);

    //strcpy(palabra, palabra2); //primero el destino, despues el origen
    //printf("Destino: %s -- Origen %s", palabra, palabra2);

    strcat(palabra, palabra2); //recibe dos punteros a char, lo que pasamos en el segundo parametro concatena en el primer parametro
    puts(palabra);//sirve solo para mostrar un string, sin darle formato a la variable




    return 0;
}
