#include "stdio.h"

int es114 ()
{

    // Progettare un algoritmo che legga da terminale una sequenza di interi positivi e negativi
    // terminati dal valore 0 (uno su ogni linea) e stampi il prodotto degli interi positivi e la somma dei negativi.

    int nNumero;
    int nSomma = 0;
    int nProdotto = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &nNumero);

    while (nNumero != 0)
    {
        if (nNumero > 0)
        {
            nProdotto *= nNumero;
        }
        else
        {
            nSomma += nNumero;
        }

        printf("Inserisci un numero: ");
        scanf("%d", &nNumero);
    }

    printf("Il prodotto è: %d", nProdotto);
    printf("\nLa somma è: %d", nSomma);

    return 0;
}