#include <stdio.h>

int main(){

    int a, b, c, d;
    int min, max, somma;
    float media;
    int i;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }

    printf("\nIl numero maggiore e': %d\n", max);
    printf("Il numero minore e': %d\n", min);

    printf("\nInserisci un terzo numero: ");
    scanf("%d", &c);

    somma=a+b;
    media=(somma+c)/2;

    printf("\nMedia: %.2f\n", media);

    return 0;
}