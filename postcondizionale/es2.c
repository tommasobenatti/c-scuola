// programma con ciclo do while dato un numero calcola uguale numero di numeri random e
// visualizza quanti numeri pari e quanti numeri dispari sono stati generati

#include<stdio.h>
#include<stdlib.h> // per rand

int main(){
    // Assegnazione valori iniziali per il funzionamento del ciclo
    int n = 0;
    int i = 0;
    int pari = 0;
    int dispari = 0;
    int numero;

    // Inserisci quantità numeri da generare
    printf("Quanti numeri vuoi generare?: ");
    scanf("%d", &n);

    // Ciclo do while che genera numeri random e li stampa
    do{
        numero = rand() % 100;
        if(numero % 2 == 0){
            pari++;
        }else{
            dispari++;
        }
        i++;
    }while(i < n);

    printf("\n\n-------------------\n\nSono stati generati %d numeri\n", i);
    printf("Sono stati generati %d numeri pari\n", pari);
    printf("Sono stati generati %d numeri dispari\n", dispari);

    return 0;
}