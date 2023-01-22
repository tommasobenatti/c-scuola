#include "stdio.h"

int es3()
{
    // Scrivere un programma che permette di caricare n elementi in un vettore,
    // visualizzare gli elementi del vettore e trovare il MIN degli elementi

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

    int nMin = vVettore[0];
    for (int i = 0; i < nDimensione; i++)
    {
        if (vVettore[i] < nMin)
        {
            nMin = vVettore[i];
        }
    }

    printf("\nIl minimo è: %d", nMin);

}