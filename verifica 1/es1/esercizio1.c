#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumero1;
	int nNumero2;
	
// Titolo
	printf("Esercizio 1 Verifica Laboratorio - Tommaso Benatti 3T 26/10/2021 - ITI Copernico Ferrara\n");
	printf("Dati due numeri inseriti da tastiera visualizzare il minore\n\n");

// Chiedi all'utente i numeri	
	printf("Inserisci il primo numero:\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero:\n> ");
	scanf("%d",&nNumero2);

// Elabora i dati
	if(nNumero1 < nNumero2){
		printf("Il numero minore è: %d",nNumero1);
	}
	else{
	printf("Il numero minore è: %d",nNumero2);
	}

// Controllo errori
	return 0;
};