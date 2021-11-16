// Calcolatrice che fa addizioni, sottrazioni, moltiplicazioni e divisioni


#include <stdio.h>

int main()
{
// Dichiarazione variabili
    int nNum1, nNum2;
    char cOperazione;
    float fRisultato;

// Titolo
	printf("Calcolatrice - Tommaso Benatti 3T 16/11/2021 - ITI Copernico Ferrara\n\n");

// Richiesta dati all'utente
    printf("Inserisci il primo numero\n> ");
    scanf("%d", &nNum1);
    printf("\nInserisci il secondo numero\n> ");
    scanf("%d", &nNum2);
    printf("\nInserisci l'operazione da eseguire (+, -, *, /)\n> ");
    fflush(stdin); // Pulisce lo stdin per inserire il char
    scanf("%c", &cOperazione);

// Elaborazione dati
    switch (cOperazione)
    {
        case '+': // Addizione
            fRisultato = nNum1 + nNum2;
            printf("Il risultato dell'addizione è: %f", fRisultato);
            break;
        case '-': // Sottrazione
            fRisultato = nNum1 - nNum2;
            printf("Il risultato della sottrazione è: %f", fRisultato);
            break;
        case '*': // Moltiplicazione
            fRisultato = nNum1 * nNum2;
            printf("Il risultato della moltiplicazione è: %f", fRisultato);
            break;
        case '/': // Divisione
            if(nNum2 == 0)
            {
                printf("Errore: divisione per zero"); // Ha diviso per zero
            }
            else
            {
                fRisultato = nNum1 / nNum2;
                printf("Il risultato della divisione è: %f", fRisultato); // Ha diviso per un numero diverso da zero
            }
            break;
        default:
            printf("Operazione non valida"); // Se non ha messo una operazione valida
            break;
    }

    return 0;
}