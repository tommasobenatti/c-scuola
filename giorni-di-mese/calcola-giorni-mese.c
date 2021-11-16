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
        case 1:
            nGiorni = 31;
            break;
        case 2:
            nGiorni = 28;
            printf("Se l'anno e' bisestile ne ha 29\n");
            break;
        case 3:
            nGiorni = 31;
            break;
        case 4:
            nGiorni = 30;
            break;  
        case 5:
            nGiorni = 31;
            break;
        case 6:
            nGiorni = 30;
            break; 
        case 7:
            nGiorni = 31;
            break;
        case 8:
            nGiorni = 31;
            break;
        case 9:
            nGiorni = 30;
            break; 
        case 10:
            nGiorni = 31;
            break;
        case 11:
            nGiorni = 30;
            break;
        case 12:
            nGiorni = 31;
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