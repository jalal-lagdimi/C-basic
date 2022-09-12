#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main()
{3
    float A,B,RESULT;
    char op;
    printf("enter operation: (+) (/) (-) (^) (*) : ");
    scanf("%f %c %f",&A,&op,&B);

    switch(op){
    case '^': printf("reslutat: %.2f ^ %.2f = %.2f",A,B,pow(A,B));
    break;
    case '+': printf("resultat: %.2f + %.2f = %.2f",A,B,A+B);
    break;
    case '-': printf("resultat: %.2f - %.2f = %.2f",A,B,A-B);
    break;
    case '*': printf("resultat: %.2f * %.2f = %.2f",A,B,A*B);
    break;
    case '/': if(B!=0){
        printf("reslutat: %.2f / %.2f = %.2f",A,B,A/B);
    } else
        printf("impossible to devision on zero!");
    }


    return 0;
}
