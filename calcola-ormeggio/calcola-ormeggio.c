#include<stdio.h>

int main(){

    // calcola il costo giornarliero dell'ormeggio di una barca sapendo i vari prezzi (vedi classroom)

    // dichiara variabili (tutte in un unico int per risparmiare spazio)
    int nMetri, nGiorni, nCosto;

    // menu
    printf("Costi giornalieri:\nFino a 5m costa 15€\nFino a 12m costa 22€\nFino a 15m costa 30€\nOltre 15m costa 45€\n\nMassimo 20m");

    // chiede il numero di metri
    printf("\nInserisci il numero di metri: ");
    scanf("%d", &nMetri);

    // chiede il numero di giorni
    printf("\nInserisci il numero di giorni: ");
    scanf("%d", &nGiorni);

    // calcola il costo dell'ormeggio
    switch(nMetri){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            nCosto = nGiorni * 15;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            nCosto = nGiorni * 22;
            break;
        case 13:
        case 14:
        case 15:
            nCosto = nGiorni * 30;
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            nCosto = nGiorni * 45;
            break;
        default:
            printf("\nNon e' possibile calcolare il costo dell'ormeggio per questo numero di metri (massimo 20 metri)");
            return 0; // termina applicazione per non proseguire
            break;
    }

    // stampa il risultato
    printf("Il costo dell'ormeggio e' di %.2d euro", nCosto);

    return 0;
}