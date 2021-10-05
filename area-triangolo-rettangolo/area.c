#include<stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nBase;
	int nAltezza;
	int nArea_rettangolo;
	float fArea_triangolo;
	
	printf("Calcolatore area rettangolo & triangolo - Tommaso Benatti 3T 05/10/2021 Project nr.2 - ITI Copernico Ferrara\n\n");

	
	printf("Inserisci la base:\n> ");
	scanf("%d",&nBase);
	printf("Inserisci l'altezza:\n> ");
	scanf("%d",&nAltezza);
	
	nArea_rettangolo = nBase * nAltezza;
	fArea_triangolo = (float) (nBase * nAltezza) / 2;
	
	printf("\n> L'area del rettangolo e': %d", nArea_rettangolo);
	printf("\n> L'area del triangolo e': %f", fArea_triangolo);
	
	return 0;
	
}
