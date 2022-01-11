#include<stdio.h>

int main(){
    
    int nNum;
    int i = 0;
    int nSomma = 0;
    int nValori = 5;

    while(i < nValori){
        printf("Inserisci il valore %d: ", i);
        scanf("%d", &nNum);
        nSomma = nSomma + nNum;
        i++;
    }

    printf("La somma dei valori inseriti è: %d", nSomma);
    return 0;

}