#include <stdio.h>

int cirodai13() {

    int vVettore[10];
    int nNumero;
    int i;
    int j;
    int nDuplicati = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Inserisci il numero %d: ", i);
        scanf("%d", &nNumero);
        vVettore[i] = nNumero;
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vVettore[i] == vVettore[j])
            {
                nDuplicati++;
                printf("Il numero %d e' duplicato\n", vVettore[i]);
            }
        }
    }

    if (nDuplicati == 0)
    {
        printf("Tutto regolare");
    }

    return 0;

}