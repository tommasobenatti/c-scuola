//stabilire la stagione corrispondente al mese inserito come intero dall’utente
#include <stdio.h>

int main() {

// Dichiarazione variabile
    int nMese;
    int nGiorno;

// Richiesta dati all'utente
    printf("Inserisci il mese\n> ");
    scanf("%d", &nMese);

// Elaborazione dati
    switch (nMese) {
        case 1:
        case 2:
            printf("La stagione e' inverno\n");
            break;
        case 12:
            printf("Inserire il giorno\n> ");
            scanf("%d", &nGiorno);
            if (nGiorno >= 21) {
                printf("La stagione e' inverno");
            } else {
                printf("La stagione e' autunno");
            }
            break;
        case 3:
            printf("Inserire il giorno\n> ");
            scanf("%d", &nGiorno);
            if (nGiorno >= 21) {
                printf("La stagione e' primavera");
            } else {
                printf("La stagione e' inverno");
            }
            break;
        case 4:
        case 5:
            printf("La stagione e' primavera");
            break;
        case 6:
            printf("Inserire il giorno\n> ");
            scanf("%d", &nGiorno);
            if (nGiorno >= 21) {
                printf("La stagione e' estate");
            } else {
                printf("La stagione e' primavera");
            }
            break;
        case 7:
        case 8:
            printf("La stagione e' estate");
            break;
        case 9:
            printf("Inserire il giorno\n> ");
            scanf("%d", &nGiorno);
            if (nGiorno >= 21) {
                printf("La stagione e' autunno");
            } else {
                printf("La stagione e' estate");
            }
            break;
        case 10:
        case 11:
            printf("La stagione e' autunno");
            break;
        default:
            printf("Mese non valido");
            break;
    }

// Controllo errori
    return 0;

}