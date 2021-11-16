// Calcolatrice che fa addizioni, sottrazioni, moltiplicazioni e divisioni


#include <stdio.h>

int main()
{
// Dichiarazione variabili
    float fNum1, fNum2, fRisultato;
    char cOperazione;

// Titolo
	printf("Calcolatrice - Tommaso Benatti 3T 16/11/2021 - ITI Copernico Ferrara\n\n");

// Richiesta dati all'utente
    printf("Inserisci il primo numero\n> ");
    scanf("%f", &fNum1);
    printf("\nInserisci il secondo numero\n> ");
    scanf("%f", &fNum2);
    printf("\nInserisci l'operazione da eseguire (+, -, *, /)\n> ");
    fflush(stdin); // Pulisce lo stdin per inserire il char
    scanf("%c", &cOperazione);

// Elaborazione dati
    switch (cOperazione)
    {
        case '+': // Addizione
            fRisultato = fNum1 + fNum2;
            printf("Il risultato dell'addizione e': %f", fRisultato);
            break;
        case '-': // Sottrazione
            fRisultato = fNum1 - fNum2;
            printf("Il risultato della sottrazione e': %f", fRisultato);
            break;
        case '*': // Moltiplicazione
            fRisultato = fNum1 * fNum2;
            printf("Il risultato della moltiplicazione e': %f", fRisultato);
            break;
        case '/': // Divisione
            if(fNum2 == 0)
            {
                printf("Errore: divisione per zero"); // Ha diviso per zero
            }
            else
            {
                fRisultato = fNum1 / fNum2;
                printf("Il risultato della divisione e': %f", fRisultato); // Ha diviso per un numero diverso da zero
            }
            break;
        default:
            printf("Operazione non valida"); // Se non ha messo una operazione valida
            break;
    }

    return 0;
}
