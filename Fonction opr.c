#include <stdio.h>
#include <stdlib.h>

float somme(float T[]){
  int i;
  float s;
  s=0;
  for(i=0;i<10;i++)
    s=s+T[i];
  return s;
}
float produit(float T[]){
  int i;
  float p;
  p=1;
  for(i=0;i<10;i++)
    p=p*T[i];
    return p;
}

float moyenne(float T[]){
  int i;
  float m,s;
  s=somme(T);
  m=s/10;
  return m;
}

void PN(float T[]){
  int i;
  printf("the positif number is: ");
  for(i=0;i<10;i++){
    if(T[i]>0)
        printf("%.2f\t",T[i]);
  }
  printf("\nthe negatif number is: ");
  for(i=0;i<10;i++){
    if(T[i]<0)
        printf("%.2f\t",T[i]);
  }
}

int main()
{   float T[10];
    int i;
    for(i=0;i<10;i++){
        printf("T[%d] = ",i+1);
        scanf("%f",&T[i]);
    }
    printf("la somme est: %.2f\n",somme(T));
    printf("le produit est: %.2f\n",produit(T));
    printf("la moyenne est: %.2f\n",moyenne(T));
    PN(T);
    return 0;
}
