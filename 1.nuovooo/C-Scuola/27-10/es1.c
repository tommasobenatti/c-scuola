#include <stdio.h>
#include <stdlib.h>

int es1() {

    // Scrivere un programma che permette di caricare n elementi in un vettore in modo casuale (numeri interi)
    // visualizzare gli elementi del vettore.

    int nDimensione;
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &nDimensione);

    int vVettore[nDimensione];

    for (int i = 0; i < nDimensione; i++)
    {
        vVettore[i] = rand() % 100;
    }

    for (int i = 0; i < nDimensione; i++)
    {
        printf("%d ", vVettore[i]);
    }

}
