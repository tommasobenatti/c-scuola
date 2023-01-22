#include <time.h>
#include "stdio.h"
#include "stdlib.h"

int jsjs2()
{

    int vVettore[10];
    int nNumero;
    int nMax;
    int nMin;
    int nPosMax;
    int nPosMin;
    int i;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        vVettore[i] = 1+ rand() % 100;
    }

    printf("Il vettore e': ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vVettore[i]);
    }

    printf("\n");

    nMax = vVettore[0];
    nMin = vVettore[0];

    for (i = 0; i < 10; i++)
    {
        if (vVettore[i] > nMax)
        {
            nMax = vVettore[i];
            nPosMax = i;
        }
        if (vVettore[i] < nMin)
        {
            nMin = vVettore[i];
            nPosMin = i;
        }
    }

    printf("Il numero massimo e': %d e si trova nella posizione %d\n", nMax, nPosMax);
    printf("Il numero minimo e': %d e si trova nella posizione %d\n", nMin, nPosMin);

    nNumero = vVettore[nPosMax];
    vVettore[nPosMax] = vVettore[nPosMin];
    vVettore[nPosMin] = nNumero;

    printf("\n\nIl vettore con i numeri invertiti e': ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vVettore[i]);
    }

    printf("\n");

    return 0;






}