#include<stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nBase;
	int nAltezza;
	int nArea_rettangolo;
	float fArea_triangolo;
	
// Titolo
	printf("Calcolatore area rettangolo & triangolo - Tommaso Benatti 3T 05/10/2021 Project nr.2 - ITI Copernico Ferrara\n\n");

// Chiedi all'utente i dati	
	printf("Inserisci la base:\n> ");
	scanf("%d",&nBase);
	printf("Inserisci l'altezza:\n> ");
	scanf("%d",&nAltezza);

// Calcola i dati	
	nArea_rettangolo = nBase * nAltezza;
	fArea_triangolo = (float) (nBase * nAltezza) / 2;

// Mostra i dati all'utente	
	printf("\n> L'area del rettangolo e': %d", nArea_rettangolo);
	printf("\n> L'area del triangolo e': %f", fArea_triangolo);
	
// Controllo errori
	return 0;
	
}
