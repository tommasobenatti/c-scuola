#include<stdio.h>

int main(){

    /* Data la media di uno studente, calcolare l'importo da versare per l'iscrizione all'anno successivo sapendo che tale importo prevede:
    - una quota fissa di € 18,00 e una quota aggiuntiva di € 25,00 se la media dei voti è inferiore a 7;
    - € 17,50 + € 18,00 se la media dei voti è compresa tra 7 e 8;
    - € 18,00 nessuna quota aggiuntiva se la media dei voti è superiore a 8.
    Nel caso in cui il reddito familiare sia inferiore a € 18.000, l'importo finale è ridotto del 50%.
    Chiedere il reddito familiare*/

// Dichiarazione variabili
    float fRedFam, fImporto;
    int nMediaVoti;

// Richiesta dati e salvataggio nelle variabili
    printf("Inserisci il reddito familiare\n> ");
    scanf("%f", &fRedFam);
    printf("Inserisci la media dei voti\n> ");
    scanf("%d", &nMediaVoti);

// Elaborazione dati
    switch(nMediaVoti){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            fImporto = 18.00 + 25.00;
            break;
        case 7:
            fImporto = 18.00 + 17.50;
            break;
        case 8:
            fImporto = 17.50 + 18.00;
            break;
        case 9:
            fImporto = 18.00;
        case 10:
            fImporto = 18.00;
            break;
        default:
            printf("Errore: media non valida");
            return 0;
            break;
    }

// Reddito familiare inferiore 18k
    if(fRedFam < 18000){
        fImporto = fImporto - (fImporto * 0.5);
    }

// Stampa risultato
    printf("L'importo da versare e': %f", fImporto);

    return 0;
}