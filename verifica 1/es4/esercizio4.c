#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	float fPrezzo;
    float fCifrascontata;
    float fPrezzoscontato;
	
// Titolo
	printf("Esercizio 4 Verifica Laboratorio - Tommaso Benatti 3T 26/10/2021 - ITI Copernico Ferrara\n");
	printf("Calcola lo sconto del 20% sul prezzo di un articolo inserito da tastiera\n\n");

// Chiedi all'utente i numeri	
	printf("Inserisci il prezzo dell articolo\n> ");
	scanf("%f",&fPrezzo);

// Calcola il prezzo scontato
    fCifrascontata = (fPrezzo * 20) / 100;
    fPrezzoscontato = fPrezzo - fCifrascontata;

// Output prezzo e cifra scontata
    printf("Il prezzo scontato è: %f",fPrezzoscontato);
    printf("\nLa cifra scontata è di: %f",fCifrascontata);

// Controllo errori
	return 0;
};