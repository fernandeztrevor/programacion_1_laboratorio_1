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
    printf("Ahora seleccione la conversión que desea realizar:\nA - De Farenheit a Centígrados.\nB - De Centígrados a Farenheit.\n");
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
        printf("\nLa temperatura en Centígrados es %.2f°C",egreso);
        break;
    case 'b':
        egreso=ingreso+32;
        printf("\nLa temperatura en Farenheit es %.2f°F",egreso);
        break;
    }
    return 0;

}
