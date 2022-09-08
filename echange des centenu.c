#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B,M;
    printf("A = ");
    scanf("%f",&A);
    printf("B = ");
    scanf("%f",&B);
    if(A*B>0){
        M=A;
        A=B;
        B=M;
        printf("A = %.2f ET B = %.2f\n",A,B);}
        else
        printf("A = %.2f ET B = %.2f ",A+B,B*B);



      return 0;
}
