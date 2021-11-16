#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumero1;
	int nNumero2;
	
// Titolo
	printf("Esercizio 5 Verifica Laboratorio - Tommaso Benatti 3T 26/10/2021 - ITI Copernico Ferrara\n");
	printf("Dati due numeri inseriti da tastiera visualizzare il numero che è pari\n\n");

// Chiedi all'utente i numeri	
	printf("Inserisci il primo numero:\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero:\n> ");
	scanf("%d",&nNumero2);

// Elabora i dati
    if (nNumero1%2==0 && nNumero2%2!=0){
        printf("Il numero pari è: %d",nNumero1);
    }
    else
    {
        if (nNumero2%2==0 && nNumero1%2!=0)
        {
            printf("Il numero pari è: %d",nNumero2);
        }
        else
        {
            printf("Nessuno dei due numeri inseriti è pari");
        }
    }

// Controllo errori
	return 0;
};