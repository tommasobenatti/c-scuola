#include "stdio.h"

int es6()
{
    // Dato un vettore numerico di N elementi
    // stampare i numeri dispari quanti valori diversi da zero si sono incontrati,
    // il numero dispari incontrato e la sua posizione nel vettore.

    int nDimensione;
    int nPosizione = 0;
    int nDispari = 0;
    int nDiversiDaZero = 0;

    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &nDimensione);

    int vVettoreDispari[nDimensione];
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
        if (vVettore[i] % 2 != 0)
        {
            vVettoreDispari[nDispari] = vVettore[i];
            nDispari++;
        }
    }

    printf("\nI valori dispari sono: ");

    for (int i = 0; i < nDispari; i++)
    {
        printf("%d ", vVettoreDispari[i]);
    }

    printf("\nIl primo dispari è: %d", vVettoreDispari[0]);

    for (int i = 0; i < nDimensione; i++)
    {
        if (vVettore[i] == vVettoreDispari[0])
        {
            nPosizione = i;
            break;
        }
    }

    printf("\nLa posizione del primo dispari è: %d", nPosizione);

    for (int i = 0; i < nDimensione; i++)
    {
        if (vVettore[i] != 0)
        {
            nDiversiDaZero++;
        }
    }

    printf("\nI valori diversi da zero sono: %d", nDiversiDaZero);

    return 0;

}