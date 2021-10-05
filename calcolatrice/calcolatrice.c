#include <stdio.h>
#include <math.h>

int main()
{
	int nNumero1;
	int nNumero2;
	int nSomma;
	int nSottrazione;
	int nMoltiplicazione;
	int nDivisione;
	int nPotenza;
	int nRadice;
	int nScelta;
	
	printf("Calcolatrice - Tommaso Benatti 3T 28/09/2021 Project nr.1 - ITI Copernico Ferrara\n\n");
	
	start:
	printf("Scegli la funzione:\n1: Somma\n2: Sottrai\n3: Moltiplica\n4: Dividi\n5: Potenza\n6: Radice quadrata\n\n9: Esci\n> ");
	scanf("%d",&nScelta);
	
	if ( nScelta == 1 )
	goto somma;
	if ( nScelta ==	2 )
	goto sottrazione;
	if ( nScelta ==	3 )
	goto moltiplica;
	if ( nScelta ==	4 )
	goto dividi;
	if ( nScelta ==	5 )
	goto potenza;
	if ( nScelta ==	6 )
	goto radice;
	
	if ( nScelta ==	9 )
	goto esci;
	
	somma:{
	printf("\nInserisci il primo numero da sommare\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero da sommare\n> ");
	scanf("%d",&nNumero2);
	
	nSomma = nNumero1 + nNumero2;
	
	printf("\nLa somma e': %d\n\n",nSomma);
	
    goto start;
	}
	
	
	sottrazione:{
	printf("\nInserisci il primo numero da sottrarre\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero da sottrarre\n> ");
	scanf("%d",&nNumero2);
	
	nSottrazione = nNumero1 - nNumero2;
	
	printf("\nLa sottrazione e': %d\n\n",nSottrazione);
	
    goto start;
	}
	
	moltiplica:{
	printf("\nInserisci il primo numero da moltiplicare\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero da moltiplicare\n> ");
	scanf("%d",&nNumero2);
	
	nMoltiplicazione = nNumero1 * nNumero2;
	
	printf("\nLa moltiplicazione e': %d\n\n",nMoltiplicazione);
	
    goto start;
	}
	
	dividi:{
	printf("\nInserisci il primo numero da dividere\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il secondo numero da dividere\n> ");
	scanf("%d",&nNumero2);
	
	nDivisione = nNumero1 / nNumero2;
	
	printf("\nLa divisione e': %d\n\n",nDivisione);
	
    goto start;
	}
	
	potenza:{
	printf("\nInserisci l'esponente della potenza\n> ");
	scanf("%d",&nNumero1);
	printf("Inserisci il numero da elevare alla potenza\n> ");
	scanf("%d",&nNumero2);
	
	nPotenza = pow ( nNumero2 , nNumero1 );
	
	printf("\nLa potenza e': %d\n\n",nPotenza);
	
    goto start;
	}
	
	radice:{
	printf("\nInserisci il numero per calcolare la radice\n> ");
	scanf("%d",&nNumero1);
	
	nRadice = sqrt ( nNumero1 );
	
	printf("\nLa radice e': %d\n\n",nRadice);
	
    goto start;
	}

esci: return 0;

}
