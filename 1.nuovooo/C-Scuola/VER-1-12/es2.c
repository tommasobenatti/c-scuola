#include<stdio.h>

int sciao()
{
    // VERIFICA DI INFORMATICA - ESERCIZIO 1 - TOMMASO BENATTI 4°T 01/12/2022

    // Sviluppare un programma che acquisisca da tastiera due vettori contenenti 10 numeri interi,
    // assicurandosi che nel secondo array non ci siano duplicati del primo vettore, in caso di numero duplicato
    // salvare il numero e la posizione del numero duplicato nel vettore 3.
    // Si trovino quindi tutti gli elementi comuni ad entrambi gli array e si stampi un messaggio indicante,
    // per ogni elemento comune, l’indice occupato nel primo array e nel secondo.

    int vVettore1[10];
    int vVettore2[10];
    int vVettore3[10];
    int nDimensione2 = 0;
    int nNumero;
    int nNumero2;
    int i;
    int j;


    for (i = 0; i < 10; i++)
    {
        printf("Inserisci il numero nella posizione %d del vettore1: ", i);
        scanf("%d", &nNumero);
        vVettore1[i] = nNumero;
    }

    for (i = 0; i < 10; i++)
    {
        printf("Inserisci il numero nella posizione %d del vettore2: ", i);
        scanf("%d", &nNumero2);

        for (j = 0; j < 10; j++)
        {
            if (nNumero2 == vVettore1[j])
            {

                vVettore3[i] = nNumero2;
                nDimensione2++;

                printf("Il numero inserito è già presente nel vettore1, inseriscine un altro: ");
                scanf("%d", &nNumero2);
                j = 0;
            }
        }
        vVettore2[i] = nNumero2;
    }

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

    printf("\nI numeri duplicati sono: ");
    for (i = 0; i < nDimensione2; i++)
    {
        printf("%d; ", vVettore3[i]);
    }

    printf("\nLe posizioni dei numeri duplicati sono: ");
    for (i = 0; i < nDimensione2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (vVettore3[i] == vVettore1[j])
            {
                printf("\nnel vettore1 il numero %d nella posizione %d ", vVettore3[i], j);
            }
            if (vVettore3[i] == vVettore1[j])
            {
                printf("\n\nnel vettore2 il numero %d nella posizione %d ", vVettore3[i], i);
            }
        }
    }



    return 0;


}