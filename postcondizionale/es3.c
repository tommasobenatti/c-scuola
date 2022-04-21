// programma con ciclo post condizionale do while che legge da tastiera un numero, poi genera con rand una sequenza di numeri interi
// e al termine stampa a video il numero dei numeri letti che sono maggiori di zero, di quelli che sono minori di zero e di quelli nulli

// Tommaso Benatti 3°T 5/4/2022

//Non metto ulteriori commenti per mancanza di tempo

#include<stdio.h>
#include<stdlib.h> // per rand

int main(){
    int n;
    int i = 0;
    int maggiore = 0;
    int minore = 0;
    int nullo = 0;
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    do{
        numero = rand() % n - n/2;
        if(numero > 0){
            maggiore++;
        }else if(numero < 0){
            minore++;
        }else{
            nullo++;
        }
        i++;

    }while(i < n);

    printf("\n\n-------------------\n\nSono stati generati %d numeri\n", i);
    printf("Sono stati generati %d numeri maggiori di zero\n", maggiore);
    printf("Sono stati generati %d numeri minori di zero\n", minore);
    printf("Sono stati generati %d numeri nulli\n", nullo);

    return 0;

}