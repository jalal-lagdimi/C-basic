#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,M;

     printf("NOTE 1: ");
    scanf(" %f",&N1);
     printf("NOTE 2: ");
    scanf(" %f",&N2);
     printf("NOTE 3: ");
    scanf(" %f",&N3);
    M = (N1+N2+N3)/3;
    printf("VOTRE MOYEN EST: %.2f\n",M);
    if(M>=10&&M<=12){
        printf("VOTRE MENTION EST: PASSABLE\n");}
        else if (M>=12&&M<=14){
            printf("VOTRE MENTION EST: ASSEZ BIEN\n");}
        else if (M>=14&&M<=16){
            printf("VOTRE MENTION EST: BIEN\n");}
        else if (M>=16){
            printf("VOTRE MENTION EST: TRES BIEN\n");}
        else
            printf("insuffisant\n");



    return 0;
}
