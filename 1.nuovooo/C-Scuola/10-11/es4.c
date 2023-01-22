#include "stdio.h"

int es9 ()
{

    // dopo aver caricato un vettore numerico, confrontare la somma degli elementi di indice pari
    // con la somma degli elementi pari e dire quale è la somma  maggiore.

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

    if (nSommaPari > nSommaDispari)
    {
        printf("\nLa somma dei numeri pari è maggiore");
    }
    else
    {
        printf("\nLa somma dei numeri dispari è maggiore");
    }

    return 0;
}