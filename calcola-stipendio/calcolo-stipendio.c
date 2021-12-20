#include<stdio.h>

int main(){

    // programma che conoscendo il numero di ore lavorative svolte calcoli lo stipendio netto, sapendo che è di 15 euro l'ora e che viene trattenuto il 27%

    // dichiara variabili (tutte in un unico flot per risparmiare spazio)
    float fOre, fNetto, fPaga, fStipendio;

    // chiede il numero di ore lavorate
    printf("Inserisci il numero di ore lavorate: ");
    scanf("%f", &fOre);

    // calcola lo stipendio
    fPaga = (float) fOre * 15;
    fNetto = (float) fPaga * 0.27;
    fStipendio = (float) fPaga - fNetto;

    // stampa il risultato
    printf("Il tuo stipendio e' di %.2f euro", fStipendio);

}