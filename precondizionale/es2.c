// programma con ciclo precondizionale while che invita l’utente a inserire da tastiera una sequenza di numeri finché la loro somma non supera il valore 200
// e visualizza a schermo il “numero dei numeri” inseriti

// Tommaso Benatti 3°T 5/4/2022

#include<stdio.h>

int main(){
    // Assegnazione valori iniziali per il funzionamento del ciclo
    int n = 0;
    int i=0;
    int somma = 0;
    
    // Ciclo while che chiede in input un numero finché la somma non arriva a 200
    while(somma < 200){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        somma += n;
        i++; 
    }
    
    // Stampa del numero di numeri inseriti
    printf("Sono stati inseriti %d numeri per arrivare a 200\n", i);
    return 0;

}