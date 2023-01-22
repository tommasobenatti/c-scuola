#include<stdio.h>

int es2i2()
{
    // VERIFICA DI INFORMATICA - ESERCIZIO 1 - TOMMASO BENATTI 4°T 01/12/2022

    // Sviluppare un programma che acquisisce dall’utente al massimo 15
    //numeri interi positivi (interrompendo l’acquisizione se viene
    //inserito il numero 0), li inserisce in un vettore vet1 e produce un
    //vettore vet2 che li contiene in ordine inverso.

    int nNumero;
    int nDimensione = 0;
    int vVettore1[15];
    int vVettore2[15];
    int i;

    printf("Inserisci un numero: ");
    scanf("%d", &nNumero);

    while (nNumero != 0 && nDimensione < 15)
    {
        vVettore1[nDimensione] = nNumero;
        nDimensione++;

        printf("Inserisci un numero: ");
        scanf("%d", &nNumero);
    }

    printf("Il vettore 1 e': ");

    for (i = 0; i < nDimensione; i++)
    {
        vVettore2[i] = vVettore1[nDimensione - i - 1];
        printf("%d ", vVettore1[i]);
    }

    printf("\nIl vettore 2 e': ");

    for (i = 0; i < nDimensione; i++)
    {
        printf("%d ", vVettore2[i]);
    }

    return 0;
}