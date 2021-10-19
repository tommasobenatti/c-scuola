#include<stdio.h>

int main(){
	
// Dichiarazione variabili
	int nNumero;
	
// Titolo
	printf("Identificazione numero - Tommaso Benatti 3T 10/10/2021 Project nr.6 - ITI Copernico Ferrara\n\n");

// Richiesta dati all'utente
	printf("Inserisci il numero:\n> ");	
	scanf("%d",&nNumero);

//	Elaborazione dati
	if(nNumero > 0) {
		printf("Il numero e' positivo");
	}
	else{
		if(nNumero < 0){
			printf("Il numero e' negativo");
		}
		else{
			printf("Il numero e' nullo");
		}
	}
		
	return 0;
}
