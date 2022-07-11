#include<stdio.h>

int main(){

// gioco fiammifero, definire tot fiammiferi, successivamente far togliere tot fiammiferi a giocatore1, successivamente con operatore rand togliere altri fiammiferi, perde chi toglie l'ultimo fiammifero

    int tot_fiammiferi;
    int fiammiferi_giocatore1;
    int fiammiferi_giocatore2;

    printf("Inserisci il numero di fiammiferi: ");
    scanf("%d", &tot_fiammiferi);

    fiammiferi_giocatore1 = tot_fiammiferi;
    fiammiferi_giocatore2 = tot_fiammiferi;

    while(fiammiferi_giocatore1 > 0 && fiammiferi_giocatore2 > 0){
        fiammiferi_giocatore1--;
        fiammiferi_giocatore2--;
        fiammiferi_giocatore2--;
    }

    if(fiammiferi_giocatore1 == 0){
        printf("Il giocatore 1 ha perso\n");
    }
    else{
        printf("Il giocatore 2 ha perso\n");
    }

    
    return 0;
        
    
}