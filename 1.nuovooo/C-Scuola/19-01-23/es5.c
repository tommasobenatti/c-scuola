#include "stdio.h"

int main()
{

    int vPari[10];
    int nPari = 0;
    int nNumero;
    int nMax = 0;
    int nPosMax = 0;

    while (nPari < 10)
    {
        printf("Inserisci un numero pari: ");
        scanf("%d", &nNumero);
        if (nNumero % 2 == 0)
        {
            vPari[nPari] = nNumero;
            nPari++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vPari[i]);
        if (vPari[i] > nMax)
        {
            nMax = vPari[i];
            nPosMax = i;
        }
    }

    printf("\nIl valore massimo e' %d in posizione %d", nMax, nPosMax);

    return 0;



}