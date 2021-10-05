#include<stdio.h>

int main(){
	
	int nValore1;
	int nValore2;  int nSalvavariabile1;
    int nSalvavariabile2;
	
// Titolo
	printf("Inverti variabili - Tommaso Benatti 3T 05/10/2021 Project nr.3 - ITI Copernico Ferrara\n\n");

// Chiedi i valori all'utente
    printf("Inserisci il primo valore:\n> ");
	scanf("%d",&nValore1);
	printf("Inserisci il secondo valore:\n> ");	
	scanf("%d",&nValore2);
	
// Processa i valori invertendoli
	nSalvavariabile1 = nValore1;
	nSalvavariabile2 = nValore2;
	nValore1 = nSalvavariabile2;
	nValore2 = nSalvavariabile1;
	
// Mostra i valori invertiti all'utente
	printf("\nIl primo valore e':\n> %d", nValore1);
	printf("\n\nIl secondo valore e':\n> %d", nValore2);
	
// Controllo errori
	return 0;
}
