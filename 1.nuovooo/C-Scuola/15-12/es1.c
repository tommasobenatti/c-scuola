#include "stdlib.h"
#include "stdio.h"

int es221()
{

    int nDimensione;
    int i;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &nDimensione);

    int vVettore[nDimensione];

    for (i = 0; i < nDimensione; i++)
    {
        vVettore[i] = rand() % 100;
    }

    for (i = 0; i < nDimensione; i++)
    {
        printf("%d ", vVettore[i]);
    }
}