#include <stdio.h>
// Codice disponibile al link https://github.com/tommasobenatti/c-scuola

int main(){
	
	int nNumber1;
	int nNumber2;
	
// Titolo
	printf("identify the even numver given two numbers\n\n");

    printf("Insert the first number: ");
    scanf("%d", &nNumber1);
    printf("Insert the second number: ");
    scanf("%d", &nNumber2);

    if(nNumber1 % 2 == 0){
        printf("%d is even\n", nNumber1);
    }
    else{
        printf("%d is odd\n", nNumber1);
    }


// Controllo errori
	return 0;
};