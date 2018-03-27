#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    int edad;
    int legajo;
    int resultado;
    int nota;

    edad=pedirEntero("Ingrese edad", 18, 60);
    legajo= pedirEntero("Ingrese legajo", 1, 1500);
    nota=pedirEntero("Ingrese la nota",1 ,10);

    return 0;
}


