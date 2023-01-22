#include "stdio.h"

int es7 ()
{

    // Dato un vettore di N elementi stampare l'elemento maggiore e il suo indice.

    int nDimensione;
    int nPosizione = 0;
    int nMaggiore = 0;

    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &nDimensione);

    int vVettore[nDimensione];

    for (int i = 0; i < nDimensione; i++)
    {
        printf("Inserisci il valore %d: ", i);
        scanf("%d", &vVettore[i]);
    }

    printf("I valori inseriti sono: ");
    for (int i = 0; i < nDimensione; i++)
    {
        printf("%d ", vVettore[i]);
    }

    for (int i = 0; i < nDimensione; i++)
    {
        if (vVettore[i] > nMaggiore)
        {
            nMaggiore = vVettore[i];
            nPosizione = i;
        }
    }

    printf("\nIl maggiore è: %d", nMaggiore);
    printf("\nLa posizione del maggiore è: %d", nPosizione);

    return 0;


}