#include "stdio.h"

int es8 ()
{

    // Dato un vettore di N elementi, stampare la somma dei numeri pari in esso contenuti e la somma dei numeri dispari.

    int nDimensione;
    int nSommaPari = 0;
    int nSommaDispari = 0;

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
        if (vVettore[i] % 2 == 0)
        {
            nSommaPari += vVettore[i];
        }
        else
        {
            nSommaDispari += vVettore[i];
        }
    }

    printf("\nLa somma dei numeri pari è: %d", nSommaPari);
    printf("\nLa somma dei numeri dispari è: %d", nSommaDispari);

    return 0;

}