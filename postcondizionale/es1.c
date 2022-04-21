// programma con ciclo do while che effettua il calcolo della media dei numeri inseriti, 
// inserendoli uno alla volta e chiedendo a ogni inserimento di un numero se i voti da inserire sono terminati accettando come risposta S oppure N

// Tommaso Benatti 3°T 5/4/2022
#include<stdio.h>

int main(){
    // Assegnazione valori iniziali per il funzionamento del ciclo
    int n = 0;
    int i=0;
    float somma = 0;
    char risposta;

    // Ciclo do while che chiede in input un numero e poi controlla che la risposta sia S per ripetere, in altro caso esce dal ciclo
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        somma += n;
        i++; 
        printf("\nVuoi inserire un altro numero? S/N: ");
        fflush(stdin);
        scanf("%c", &risposta);
    }while(risposta == 'S' || risposta == 's');

    // Stampa del numero di numeri inseriti
    printf("\n\n-------------------\n\nSono stati inseriti %d numeri\n", i);
    
    printf("La media dei numeri inseriti è: %.2f\n", somma/i);
    return 0;

}