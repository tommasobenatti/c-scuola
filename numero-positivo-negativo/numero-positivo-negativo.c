#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumero;
	
// Titolo
	printf("Calcolare se il numero è positivo o negativo - Tommaso Benatti 3T 12/10/2021 Project nr.5 - ITI Copernico Ferrara\n\n");
	
// Chiedi all'utente i dati	
	printf("Inserisci il numero:\n> ");
	scanf("%d",&nNumero);
	
// Processa il numero e capisci se positivo o negativo
	if (nNumero >= 0){
		printf("Il numero e' positivo");
	}
	
	else{
		printf("Il numero e' negativo");
	}
	
// Controllo errori
	return 0;
}
