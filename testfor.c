#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,x;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    for(i=0;i<=10;i++){
        k=i*x;
        printf("%d * %d = %d\n",i,x,k);
    }

    return 0;
}
