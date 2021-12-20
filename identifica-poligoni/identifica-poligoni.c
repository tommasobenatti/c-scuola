//Dati i lati inseriti dall'utente, capisci che tipo di poligono è e stampalo a video.

#include <stdio.h>

int main() {

// Dichiara variabile
    int nLatiPoligono;

// Richiesta lati all'utente
    printf("Inserisci il numero di lati del poligono: ");
    scanf("%d", &nLatiPoligono);

// Elaborazione dati
    switch (nLatiPoligono) {
        case 3:
            printf("Il poligono e' un triangolo");
            break;
        case 4:
            printf("Il poligono e' un quadrato");
            break;
        case 5:
            printf("Il poligono e' un pentagono");
            break;
        case 6:
            printf("Il poligono e' un esagono");
            break;
        case 7:
            printf("Il poligono e' un ettagono");
            break;
        case 8:
            printf("Il poligono e' un ottagono");
            break;
        case 9:
            printf("Il poligono e' un ennagono");
            break;
        case 10:
            printf("Il poligono e' un decagono");
            break;
        default:
            printf("Inserisci un valore da 3 a 10");
            break;
    }

// Controllo errori
    return 0;
}