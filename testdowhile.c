#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
      do{
      printf("ENTER NUMBER: ");
      scanf("%d",&x);}
      while(x<0||x>20);
      i=0;
      do{
        printf("%d * %d = %d\n",i,x,i*x);
        i++;
      }while(i<10);
     return 0;
}

