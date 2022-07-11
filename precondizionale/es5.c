#include<stdio.h>

int main(){

    int num;
    int cont_p = 0;
    int cont_n = 0;
    int cont_z = 0;
    char c;

    printf("Inserisci un numero intero: ");
    scanf("%d", &num);
    c = getchar();

    while (c != 'q'){
        if (num > 0){
            cont_p++;
        }
        else if (num < 0){
            cont_n++;
        }
        else{
            cont_z++;
        }
        printf("Inserisci un numero intero: ");
        scanf("%d", &num);
        c = getchar();
    }

    printf("Il numero di numeri maggiori di zero è: %d\n", cont_p);
    printf("Il numero di numeri minori di zero è: %d\n", cont_n);
    printf("Il numero di numeri nulli è: %d\n", cont_z);

    return 0;

}