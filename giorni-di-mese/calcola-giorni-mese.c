//In base al mese inserito visualizzare da quanti giorni è composto
#include <stdio.h>


int main(){

// Dichiarazione variabili
    int nMese, nGiorni;

// Titolo
    printf("Visualizza giorni nel mese - Tommaso Benatti 3T 16/11/2021 - ITI Copernico Ferrara\n\n");

// Richiesta mese all'utente
    printf("Inserisci il numero del mese\n> ");
    scanf("%d", &nMese);

// Elaborazione dati
    switch (nMese)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            nGiorni = 31;
            break;
        case 2:
            nGiorni = 28;
            printf("Se l'anno e' bisestile ne ha 29\n");
            break;
        case 4: case 6: case 9: case 11:
            nGiorni = 30;
            break;  
        default:
            printf("Mese non valido");
            break;
    }
    
// Visualizzazione risultato
    printf("Il mese %d ha %d giorni", nMese, nGiorni);

// Controllo errori
    return 0;
}