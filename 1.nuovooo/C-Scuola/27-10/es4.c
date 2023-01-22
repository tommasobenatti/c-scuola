#include "stdio.h"

int es4()
{

    // Scrivere un programma che legga un numero n da tastiera, dichiari un vettore di n interi,
    // chieda all’utente di inserire gli elementi del vettore. Il programma deve ricavare il vettore inverso,
    // cioè un vettore che ha le componenti invertite e, infine, stampi il vettore ricavato.
    //Esempio 1 4 5 2 3 9
    //invertito  9 3 2 5 4 1

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

    int vVettoreInverso[nDimensione];

    for (int i = 0; i < nDimensione; i++)
    {
        vVettoreInverso[i] = vVettore[nDimensione - i - 1];
    }

    printf("\nIl vettore inverso è: ");

    for (int i = 0; i < nDimensione; i++)
    {
        printf("%d ", vVettoreInverso[i]);
    }

}