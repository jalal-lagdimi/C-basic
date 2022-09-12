#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T [100];
    int i, pos, taille, N;
    printf("enter table taille: ");
    scanf("%d",&taille);
    printf("enter table element:\n");
    for(i=0;i<taille;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
     printf("enter number insserer: ");
     scanf("%d",&N);
     printf("enter number position: ");
     scanf("%d",&pos);
     if(pos<=0 || pos>taille+1){
        printf("enter another position!");}
     else {
         for(i=taille; i>=pos ;i--){
            T[i]=T[i-1];
         }
           T[pos-1]=N;
           taille++;
           printf("table element after inssertion: ");
         for(i=0;i<taille;i++){
            printf("%d",T[i]);
         }

     }
    return 0;
}
