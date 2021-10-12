#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumeratore;
	int nDenominatore;
	float fRisultato;
	
// Titolo
	printf("Calcolare la divisione dato numeratore e denominatore - Tommaso Benatti 3T 12/10/2021 Project nr.4 - ITI Copernico Ferrara\n\n");
	
// Chiedi all'utente i dati	
	printf("Inserisci il numeratore:\n> ");
	scanf("%d",&nNumeratore);
	printf("Inserisci il denominatore:\n> ");
	scanf("%d",&nDenominatore);
	
// Processa i dati
// Controlla che il denominatore sia diverso da 0
	if (nDenominatore == 0){
		sbagliato:{
			printf("Inserisci un denominatore diverso da 0\n> ");
			scanf("%d",&nDenominatore);
		}

// Se il denominatore è 0 continua a chiedere un denominatore diverso da 0
			if (nDenominatore == 0){
				goto sbagliato;
			}

// Se il denominatore inserito è corretto vai al calcolo			
			else{
				goto calcolo;
			}
	}
	
// Calcola divisione
	else{
		calcolo:{
			fRisultato = nNumeratore / nDenominatore;
			printf("Il risultato e': %f", fRisultato);
		}
	}
	
// Controllo errori
	return 0;
}
