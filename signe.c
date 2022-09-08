#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X;
    printf("ENTER NUMBER:\n");
    scanf("%f",&X);    
     
     if(0<X){
        printf("LE NOMBRE %.2f EST POSITIF",X);}

    else if(X==0){
        printf("LE NOMBRE EGAL ZERO");}

    else{
        printf("LE NOMBRE %.2f EST NEGATIF",X);}

    return 0;}
