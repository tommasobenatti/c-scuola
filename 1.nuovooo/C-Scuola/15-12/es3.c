#include "stdio.h"

int cirodai1() {

    int nNumeroBiglietti;
    int i;
    int j;
    printf("Inserisci il numero di biglietti: ");
    scanf("%d", &nNumeroBiglietti);

    int vBiglietti[nNumeroBiglietti];

    for (i = 0; i < nNumeroBiglietti; i++) {
        printf("Inserisci il numero di serie del biglietto %d: ", i);
        scanf("%d", &vBiglietti[i]);
    }

    int nDuplicati = 0;
    for (i = 0; i < nNumeroBiglietti; i++) {
        for (j = i + 1; j < nNumeroBiglietti; j++) {
            if (vBiglietti[i] == vBiglietti[j]) {
                nDuplicati++;
                printf("Il numero di serie %d e' duplicato\n", vBiglietti[i]);
            }
        }
    }

    if (nDuplicati == 0) {
        printf("Tutto regolare");
    }
}