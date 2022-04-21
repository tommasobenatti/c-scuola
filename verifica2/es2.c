// leggere una sequenza di numeri interi positivi strettamente maggiori di 0 e ne ricerca il valore minimo visualizzandolo sullo schermo,
// il numero minino non deve essere 0 o minore

// Verifica di Informatica Laboratorio
// Esercizio 2
// Tommaso Benatti 3°T 12/04/2021

#include <stdio.h>

int main()
{
    
    // dichiarazione variabili con associazione
    int n;
    int min = 0;

    // ciclo while che termina quando n è minore di 0
    while (n > 0)
    {
        printf("Inserire un numero intero positivo: ");
        scanf("%d", &n);

        // logica per trovare il numero minimo
        if (n > 0) {
            // trova il numero minore tra quelli inseriti
            if (n < min || min == 0) {
                min = n;
            }
        }

    }

    // stampa il numero minimo
    printf("Il numero minimo e': %d\n", min);
    return 0;
     
}