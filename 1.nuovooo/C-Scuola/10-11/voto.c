#include "stdio.h"

int ess0q1 ()
{

    //  Progettare un algoritmo che legga da terminale una sequenza di interi positivi e negativi
    //  terminati dal valore 0 (un intero su ogni linea) e stampi la media degli interi positivi.

    int nNumero;
    int nSomma = 0;
    int nContatore = 0;
    float fMedia;

    printf("Inserisci un numero: ");
    scanf("%d", &nNumero);

    while (nNumero != 0)
    {
        if (nNumero > 0)
        {
            nSomma += nNumero;
            nContatore++;
        }

        printf("Inserisci un numero: ");
        scanf("%d", &nNumero);
    }

    fMedia = (float)nSomma / nContatore;

    printf("La media è: %f", fMedia);

    return 0;

}