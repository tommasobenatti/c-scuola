#include <stdio.h>

int main()
{
    int n;
	int i;
	int div2 = 0;
	int div3 = 0;
	int vettore[n];
	
    printf("[-] Inserisci il numero di elementi del vettore: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        printf("[-] Inserisci l'elemento %d: ", i + 1);
        scanf("%d", &vettore[i]);
    }
    
    printf("[-] Contenuti vettore: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vettore[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        if (vettore[i] % 2 == 0)
        {
            div2++;
        }
        if (vettore[i] % 3 == 0)
        {
            div3++;
        }
    }
    
    printf("\n[-] Sono presenti %d elementi divisibili per 2\n", div2);
    printf("[-] Sono presenti %d elementi divisibili per 3\n", div3);
    
    return 0;
}