#include<stdio.h>

int main(){

    // Dichiarazione variabili
    int n, i, div2, div3;

    // Input numeri
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // Assegnazione valori alle variabili
    i = 1;
    div2 = 0;
    div3 = 0;

    // Ciclo while per trovare il resto della divisione per 2 e per 3
    while(i <= n){
        if(i % 2 == 0){
            div2++; // Incremento variabile div2
        }
        if(i % 3 == 0){
            div3++; // Incremento variabile div3
        }
        i++; // Incremento i
    }

    // Output risultato
    printf("\nI numeri divisibili da 2 sono: %d", div2);
    printf("\nI numeri divisibili da 3 sono: %d", div3);

    // Controllo errori
    return 0;
}