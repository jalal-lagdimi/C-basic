#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("ENTREE NUMERO ENTRE 1 ET 7:\n");
    scanf("%d",&N);
    switch (N){
        case 1: printf("LUNDI");
        break;
        case 2: printf("MARDI");
        break;
        case 3: printf("MERCREDI");
        break;
        case 4: printf("JEUDI");
        break;
        case 5: printf("VENDREDI");
        break;
        case 6: printf("SAMEDI");
        break;
        case 7: printf("DIMANCHE");
        break;
        default: printf("LE NUMERO INCORECT");
        break;
    }
    return 0;
}
