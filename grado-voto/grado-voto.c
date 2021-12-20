/* legga un numero intero da 1 a 5 (che corrisponde a una valutazione), e ne stampa il significato, secondo la notazione seguente:
- 1: Gravemente insufficiente;
- 2: Insufficiente;
- 3: Sufficiente;
- 4: Buono;
- 5: Ottimo;
*/

#include <stdio.h>

int main() {

// Dichiara variabile
    int nVoto;

// Richiesta dati all'utente
    printf("Inserisci un voto da 1 a 5: ");
    scanf("%d", &nVoto);

// Elaborazione dati
    switch (nVoto) {
        case 1:
            printf("Gravemente insufficiente");
            break;
        case 2:
            printf("Insufficiente");
            break;
        case 3:
            printf("Sufficiente");
            break;
        case 4:
            printf("Buono");
            break;
        case 5:
            printf("Ottimo");
            break;
        default:
            printf("Voto non valido");
            break;
    }

// Controllo errori
    return 0;
}