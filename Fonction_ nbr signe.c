#include <stdio.h>
#include <stdlib.h>
void signe(int a, int b){
  if(a*b>=0)
    printf("les deux chifres en meme signe!\n");
  else
    printf("les deux chifres en defferent singe\n");
}
int minimum(int a,int b){
    int min;
    if(a>b)
        min=b;
    else
        min=a;
    return min;
}
int maximum(int a, int b){
    int max;
    if(a<b)
        max=b;
    else
        max=a;
    return max;
}

int main()
{
    int a,b;
    int min, max;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    signe(a,b);
    min=minimum(a,b);
    max=maximum(a,b);
    printf("le max est: %d\n",max);
    printf("le min est: %d\n",min);

    return 0;
}
