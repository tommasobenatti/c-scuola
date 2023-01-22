#include "stdio.h"

int es2()
{

    // Scrivere un programma che permette di caricare n elementi in un vettore,
    // visualizzare gli elementi del vettore e calcolare la media degli elementi

    int nDimensione;
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

    int nSomma = 0;
    for (int i = 0; i < nDimensione; i++)
    {
        nSomma += vVettore[i];
    }

    printf("\nLa media è: %d", nSomma / nDimensione);

}