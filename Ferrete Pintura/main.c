#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float ingreso;
float egreso;
char eleccion;

int main()
{
    printf("Bienvenido, ingrese la temperatura que desea convertir: \n");
    scanf("%f", &ingreso);
    printf("Ahora seleccione la conversi�n que desea realizar:\nA - De Farenheit a Cent�grados.\nB - De Cent�grados a Farenheit.\n");
    eleccion=getche();

    operacion();

    return 0;


}

int operacion()
{
    //printf("eligio la opcion %c",eleccion);

    switch(eleccion)
    {
    case 'a':
        egreso=ingreso-32;
        printf("\nLa temperatura en Cent�grados es %.2f�C",egreso);
        break;
    case 'b':
        egreso=ingreso+32;
        printf("\nLa temperatura en Farenheit es %.2f�F",egreso);
        break;
    }
    return 0;

}
