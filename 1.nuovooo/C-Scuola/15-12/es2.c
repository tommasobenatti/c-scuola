#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int es82 ()
{

    int vVettore1[10];
    int vVettore2[10];
    int vVettore3[20];
    int nNumero;
    int nNumero2;
    int nDimensione3 = 0;
    srand(time(NULL));
    int i;
    int j;

// genera i numeri random con rand
    for (i = 0; i < 10; i++)
    {
        vVettore1[i] = 1+ rand() % 100;
        vVettore2[i] = 1+ rand() % 100;
    }



    //printa i vettori non ordinati
    printf("Il vettore1 e': ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vVettore1[i]);
    }
    printf("\nIl vettore2 e': ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vVettore2[i]);
    }
    printf("\n");



    // ordina i vettori
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (vVettore1[i] < vVettore1[j])
            {
                nNumero = vVettore1[i];
                vVettore1[i] = vVettore1[j];
                vVettore1[j] = nNumero;
            }

            if (vVettore2[i] < vVettore2[j])
            {
                nNumero2 = vVettore2[i];
                vVettore2[i] = vVettore2[j];
                vVettore2[j] = nNumero2;
            }
        }
    }



    // stampa i vettori ordinati
    printf("\nIl vettore1 ordinato e': ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vVettore1[i]);
    }
    printf("\nIl vettore2 ordinato e': ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vVettore2[i]);
    }
    printf("\n\n");



    // crea il terzo vettore
    for (i = 0; i < 10; i++)
    {
        vVettore3[i] = vVettore1[i];
        nDimensione3++;
    }
    for (i = 0; i < 10; i++)
    {
        vVettore3[nDimensione3] = vVettore2[i];
        nDimensione3++;
    }

    // ordina il terzo vettore
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            if (vVettore3[i] < vVettore3[j])
            {
                nNumero = vVettore3[i];
                vVettore3[i] = vVettore3[j];
                vVettore3[j] = nNumero;
            }
        }
    }

    // stampa il terzo vettore
    printf("Il vettore3 e': ");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", vVettore3[i]);
    }


}