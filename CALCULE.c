#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X,Y;

    printf("ENTER X NUMBER:\n");
    scanf("%f",&X);
    printf("ENTER Y NUMBER\n");
    scanf("%f",&Y);

    printf("X+Y = %.2f\n",X+Y);
    printf("X*Y = %.2f\n",X*Y);
    printf("X-Y = %.2f\n",X-Y);
    if(Y!=0){
        printf("X/Y = %.2f\n",X/Y);
    }
    else{
        printf("X/Y = ERROR");
    }
    return 0;
}
