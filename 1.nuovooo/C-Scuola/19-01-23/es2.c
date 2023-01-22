#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int sexoanal133()
{

    int vPari[30];
    int vDispari[30];
    int nPari = 0;
    int nDispari = 0;
    srand(time(NULL));

    for (int i = 0; i < 30; i++)
    {
        int nNumero = 1+ rand() % 100;
        if (nNumero % 2 == 0)
        {
            vPari[nPari] = nNumero;
            nPari++;
        }
        else
        {
            vDispari[nDispari] = nNumero;
            nDispari++;
        }
    }

    printf("Il vettore dei numeri pari e': ");
    for (int i = 0; i < nPari; i++)
    {
        printf("%d ", vPari[i]);
    }

    printf("\nIl vettore dei numeri dispari e': ");
    for (int i = 0; i < nDispari; i++)
    {
        printf("%d ", vDispari[i]);
    }

    return 0;
}