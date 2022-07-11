#include<stdio.h>

int main(){

    int n = 0;
    
    printf("Inserisci un numero: ");   
    scanf("%d", &n);

    while (n > 1){
        n = n - 2; 
    }

    if (n == 0){
        printf("Il numero è pari");
    }
    else{
        printf("Il numero è dispari");
    }

    return 0;
}