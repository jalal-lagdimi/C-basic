#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float s;
    s=0;
    for(i=1;i<=8;i++){
        printf("entree N%d: ",i);
        scanf("%d",&n);
        if(n<0)
            continue;
        s=s+n;
    }
    printf("la somme est: %.2f",s);
    return 0;
}
