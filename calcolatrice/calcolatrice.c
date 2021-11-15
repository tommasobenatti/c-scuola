// Calcolatrice che fa addizioni, sottrazioni, moltiplicazioni e divisioni


#include <stdio.h>

int main()
{
    int nNum1, nNum2;
    char cOperazione;
    float fRisultato;
    printf("Inserisci il primo numero: ");
    scanf("%d", &nNum1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &nNum2);
    printf("Inserisci l'operazione da eseguire (+, -, *, /): \n\n");
    fflush(stdin);
    printf("Inserisci l'operazione da eseguire: ");
    scanf("%c", &cOperazione);
    switch (cOperazione)
    {
        case '+':
            fRisultato = nNum1 + nNum2;
            printf("Il risultato dell'addizione è: %f", fRisultato);
            break;
        case '-':
            fRisultato = nNum1 - nNum2;
            printf("Il risultato della sottrazione è: %f", fRisultato);
            break;
        case '*':
            fRisultato = nNum1 * nNum2;
            printf("Il risultato della moltiplicazione è: %f", fRisultato);
            break;
        case '/':
            fRisultato = nNum1 / nNum2;
            printf("Il risultato della divisione è: %f", fRisultato);
            break;
        default:
            printf("Operazione non valida");
            break;
    }

    return 0;
}