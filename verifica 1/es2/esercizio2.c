#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nEta;
	
// Titolo
	printf("Esercizio 2 Verifica Laboratorio - Tommaso Benatti 3T 26/10/2021 - ITI Copernico Ferrara\n");
	printf("Data l’età di una persona determina se è maggiorenne\n\n");

// Chiedi all'utente i numeri	
	printf("Inserisci l'eta della persona:\n> ");
	scanf("%d",&nEta);

// Elabora l'eta
	if(nEta >= 18){
		printf("La persona è maggiorenne");
	}
	else{
	printf("La persona è minorenne");
	}

// Controllo errori
	return 0;
};