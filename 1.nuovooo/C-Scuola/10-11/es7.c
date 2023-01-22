#include "stdio.h"

int es46 ()
{

    // Progettare e Codificare in C un programma che permetta di
    //• Chiedere all’utente quanti numeri vuole inserire
    // • Leggere i numeri inseriti dall’utente e calcolare la somma dei fattoriali
    //• Esempio: L’utente vuole inserire 3 numeri:
    //        4, 3, 6
    //      Il programma deve calcolare 4! + 3! + 6! = 750
    //N.B. naturalmente dovete conoscere il fattoriale di un numero

    int nDimensione;
    int nSomma = 0;
    int nFattoriale = 1;

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
        for (int j = 1; j <= vVettore[i]; j++)
        {
            nFattoriale *= j;
        }
        nSomma += nFattoriale;
        nFattoriale = 1;
    }

    printf("\nLa somma dei fattoriali è: %d", nSomma);

    return 0;
}