#include <stdio.h>
#include <stdlib.h>

int funcionAleatoria();
void mensajeBienvenida(void);
int numeroAleatorio;
int eleccionUsuario();
int resultado();
int eleccion;


int main()
{
    funcionAleatoria();
    //numeroAleatorio=funcionAleatoria();
    printf("%d", numeroAleatorio);
    mensajeBienvenida();
    eleccionUsuario();
    //resultado();

    resultado();


    return 0;
}


int funcionAleatoria()
{
    //int numeroAleatorio;

    srand(time(NULL));
    numeroAleatorio=1+rand()%((3+1)-1);
 return numeroAleatorio;
}

void mensajeBienvenida(void)
{
    printf("Bienvenido, seleccione \n1. Piedra\n2. Papel\n3. Tijera\n");
}


int eleccionUsuario()
{

    scanf("%d", &eleccion);

    while (eleccion != 1 && eleccion != 2 && eleccion != 3)
    {
        printf("\nReingrese:\n");
        scanf("%d", &eleccion);
    }
    //printf("%d", eleccion);

return eleccion;
}

int resultado()
{


switch(eleccion)
{
case 1:
    if (numeroAleatorio==1)
    {
        printf("\nEmpate: Piedra vs. Piedra.\n");
    }
    if (numeroAleatorio==2)
    {
        printf("\nPerdio: Piedra vs. Papel.\n");
    }
    else
    {
        printf("\nGano: Piedra vs. Tijera.\n");
    };
    break;
case 2:
    if (numeroAleatorio==1)
    {
        printf("\nGano: Papel vs. Piedra.\n");
    }
    if (numeroAleatorio==2)
    {
        printf("\nEmpate: Papel vs. Papel.\n");
    }
    else
    {
        printf("\nPerdio: Papel vs. Tijera.\n");
    };
    break;
case 3:
    if (numeroAleatorio==1)
    {
        printf("\nPerdio: Tijera vs. Piedra.\n");
    }
    if (numeroAleatorio==2)
    {
        printf("\nGano: Tijera vs. Papel.\n");
    }
    else
    {
        printf("\nEmpate: Tijera vs. Tijera.\n");
    };
    break;
}


/*if( eleccion == numeroAleatorio)
    {
    switch (eleccion)
    {
        case 1: printf("\nEmpate: Piedra vs. Piedra.\n");
        break;
        case 2: printf("\nEmpate: Papel vs. Papel.\n");
        break;
        case 3: printf("\nEmpate: Tijera vs. Tijera.\n");
        break;
    }
    }
*/
}
