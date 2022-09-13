#include <stdio.h>
#include <stdlib.h>

float T[10];

void saisi()    // TABLE ELEMENT
{
    int i;
    printf("enter table element:\n");
    for(i=0; i<10; i++)
    {
        T[i] = i+1;
        scanf("%f",&T[i]);
    }
}


void croissante()   // min to max
{
    int i,j,c;
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(T[i]>T[j])
            {
                c = T[i];
                T[i] = T[j];
                T[j] = c ;
            }
        }
    }
    printf("Table croissante: ");
    afficheT();
}


void decroissante()   //max to min
{
    int i,j,c;
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(T[i]<T[j])
            {
                c = T[i];
                T[i] = T[j];
                T[j] = c ;
            }
        }
    }
    printf("\nTable decroissante: ");
    afficheT();
}

void afficheT()  // afiiche the new position
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("%.2f ",T[i]);
    }
}


int main() // principal program
{
    saisi();
    croissante();
    decroissante();

    return 0;
}
