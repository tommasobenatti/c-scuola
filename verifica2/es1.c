// con ciclo di while chiedere dei numeri, ad ogni numero stampare la media dei numeri inseriti. 
// si esce dal ciclo con un numero negativo

// Verifica di Informatica Laboratorio
// Esercizio 1
// Tommaso Benatti 3°T 12/4/2022

#include <stdio.h>

int main()
{
    // Dichiarazione variabili con assegnazione a 0
    int n; 
    int i = 0;
    int somma = 0;
    float media;
    
    // Breve spiegazione per funzionamento
    printf("Inserisci numeri positivi per calcolare la media,\nper terminare il ciclo inserire numero negativo");
    
    // Ciclo postcondizionale con logica 
    do
    {
        printf("Inserisci numero positivo: ");
        scanf("%d", &n);

        if (n >= 0)
        {
            somma += n;
            i++;
            media = somma / i;
    		printf("Media dei numeri inseriti: %.2f\n", media);
        }
    } while (n >= 0);

    return 0;
}