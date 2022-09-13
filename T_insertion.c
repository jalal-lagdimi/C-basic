#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TABLE [100];
    int i, N, pos, taille;
        printf("enter table taille: ");
        scanf("%d",&taille);
        printf("enter table element: \n");

    for(i=0;i<taille;i++)
    {
        printf("TABLE[%d] = ",i+1);
        scanf("%d",&TABLE[i]);
    }

        printf("choose your number: ");
        scanf("%d",&N);
        printf("enter the position: ");
        scanf("%d",&pos);

       if(pos<=0 || pos>taille+1) {
        printf("ERORR");
       } else {
           for(i=taille;i>=pos;i--){
            TABLE[i]= TABLE[i]+1;
           }
           TABLE[pos-1]=N;
           taille++;
        printf("table element after insertion: \n");
        for(i=0;i<taille;i++)
        printf("TABLE[%d]= %d\n",i+1,TABLE[i]);

       }

    return 0;
}
