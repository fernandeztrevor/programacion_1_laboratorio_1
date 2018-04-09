#include <stdio.h>
#include <stdlib.h>
#define TAM 5

//Ordenamiento Burbujeo

int main()
{
    int vector[TAM] = {5,6,-3,-9,4};
    int aux;
    int i;
    int j;

    for (i=0 ; j<TAM; j++)
    {
        for(j=i+1; j<TAM; j++)
        {
            if (vector[i] > vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }


    return 0;
}
