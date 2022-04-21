// programma che chiede di inserire 20 numeri, successivamente li inserisce nel vettore A, successivamente separare i numeri pari  nel vettore P e dispari nel vettore D, poi stampare i vettori P e D.

#include <stdio.h>

int main(){

    int A[20];
    int P[20];
    int D[20];
    int i;

    printf("Inserisci 20 numeri: ");
    for(i=0; i<20; i++){
        scanf("%d", &A[i]);
    }

    for(i=0; i<20; i++){
        if(A[i]%2==0){
            P[i]=A[i];
        }
        else{
            D[i]=A[i];
        }
    }

    // printa vettori P e D
    printf("\nVettore P: ");
    for(i=0; i<20; i++){
        printf("%d ", P[i]);
    }
    printf("\nVettore D: ");

    for(i=0; i<20; i++){
        printf("%d ", D[i]);
    }

    // calcola somma vettore P
    int sommaP=0;
    for(i=0; i<20; i++){
        sommaP=sommaP+P[i];
    }
    //printa
    printf("\nSomma vettore P: %d\n", sommaP);

    // calcola somma vettore D
    int sommaD=0;
    for(i=0; i<20; i++){
        sommaD=sommaD+D[i];
    }
    //printa
    printf("\nSomma vettore D: %d\n", sommaD);


    return 0;
}
