// programma con ciclo precondizionale while che chiede in input un numero finché non si inserisce un numero dispari. 
// Quando questo avviene, il programma termina scrivendo quanti numeri pari erano stati inseriti in precedenza.

// Tommaso Benatti 3°T 5/4/2022

#include<stdio.h>

int main(){
    // Assegnazione valori iniziali per il funzionamento del ciclo
    int n = 0;
    int i=0;
    
    // Ciclo while che chiede in input un numero finché non si inserisce un numero dispari
    while(n % 2 == 0){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        i++; 
    }

    // Stampa del numero di numeri pari inseriti in precedenza
    printf("Sono stati inseriti %d numeri pari\n", i-1);
    return 0;
}
    
