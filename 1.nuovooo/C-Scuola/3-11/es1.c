#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//#define MAX 100
#define DimA 8
#define DimB 8
#define DimC DimA+DimB

int es5()
{

    int VetA[DimA];
    int VetB[DimB];
    int VetC[DimC];
    int i;
    int j;
    int nTrovato;
    int iLenC;

    //acquisizione dati
    printf("Unione del VetA e del VetB in VetC\n");
    //VetA
    printf("\t++++VetA++++\n");
    for(i=0;i<DimA;i++)
    {
        printf("Inserire il VetA[%d] = ",i);
        scanf("%d",&VetA[i]);
    }

    //VetB
    printf("\n\t++++VetB++++\n");
    for(i=0;i<DimB;i++)
    {
        printf("Inserire il VetB[%d] = ",i);
        scanf("%d",&VetB[i]);
    }

    // unisci in vetc solo i numeri comuni in veta e vetb
    iLenC = 0;

    for(i=0;i<DimA;i++)
    {
        nTrovato = 0;
        for(j=0;j<DimB;j++)
        {
            if(VetA[i] == VetB[j])
            {
                nTrovato = 1;
                break;
            }
        }
        if(nTrovato == 1)
        {
            VetC[iLenC] = VetA[i];
            iLenC++;
        }
    }

    //stampa
    printf("\n\t++++VetC++++\n");
    for(i=0;i<iLenC;i++)
    {
        printf("\nVetC[%d] = %d" ,i,VetC[i]);
    }

    return 0;
}
