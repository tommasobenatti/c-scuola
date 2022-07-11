#include<stdio.h>

int main(){

    int num1;
    int num2;
    int resto;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    resto = num1;

    while (num1 != 0){
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    printf("Il MCD è: %d", num1);
    return 0;
}
