#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumero1;
	int nNumero2;
	int nNumero3;
    int nMedia;
	
// Titolo
	printf("Esercizio 3 Verifica Laboratorio - Tommaso Benatti 3T 26/10/2021 - ITI Copernico Ferrara\n");
	printf("Calcola la media tra tre numeri inseriti da tastiera\n\n");

// Chiedi all'utente i numeri	
	printf("Inserisci il primo numero:\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero:\n> ");
	scanf("%d",&nNumero2);
	printf("Inserisci il terzo numero:\n> ");
	scanf("%d",&nNumero3);

// Elabora i dati
    nMedia = (nNumero1 + nNumero2 + nNumero3) / 3;

    printf("La media è: %d",nMedia);

// Controllo errori
	return 0;
};