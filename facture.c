#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float F;
    printf("entree le nombre de copie: ");
    scanf("%d",&N);
    if (N<=10){
        F=N*0.30;
        }
        else if (N<=30){
        F=10*0.30+(N-10)*0.25;
        }

        else
        F=10*0.30+20*0.25+(N-30)*0.20;
        printf("FACTURE = %.2f",F);

    return 0;
}
