#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("ENTER NUMBER: ");
    scanf("%d",&x);

      while(x<0||x>20){
          printf("ENTER NUMBER: ");
          scanf("%d",&x);
    }
          i=0;
     while(i<=10){
          printf("%d * %d = %d\n",i,x,i*x);
          i++;
    }
     return 0;
}
