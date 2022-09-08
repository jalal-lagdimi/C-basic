#include <stdio.h>
#include <stdlib.h>

int main()
{   int x;
    printf("entree num entre '10' et '30':");
    scanf("%d",&x);
    while (x<10||x>30){
        if(x>30){
        printf("entree un numero inferieur a 30:");
        scanf("%d",&x);}
        else{
        printf("entree un numero seperieur a 1:");
        scanf("%d",&x);}}

        printf("merci!");

    return 0;
}
