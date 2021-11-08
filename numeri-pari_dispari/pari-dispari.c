#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumbero1;
	int nResto1;
    int nResto2;
	
// Titolo
	printf("Identifica se il numero è divisibile per 2 e per 3\n\n");

    printf("Inserisci il numero: ");
    scanf("%d", &nNumbero1);

    nResto1 = nNumbero1 % 2;
    nResto2 = nNumbero1 % 3;

    if (nResto1 == 0 && nResto2 == 0){
        printf("Il numero %d è divisibile per 2 e per 3\n", nNumbero1);
        return 0;
    }

    if (nResto1 == 0){
        printf("Il numero %d è divisibile per 2\n", nNumbero1);
    }
    else{
        printf("Il numero %d è divisibile per 3\n", nNumbero1);
    }

// Controllo errori
	return 0;
};