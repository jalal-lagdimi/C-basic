#include <stdio.h>
#include <stdlib.h>

int main()
{   char NAME [20];
    char RAISON [500];
    int AGE;

    printf("INTER YOUR NAME:\n");
    scanf("%[^%s\n]",NAME);
    printf("INTER YOUR AGE :\n");
    scanf("%d",&AGE);
    printf("WHY YOU CHOOSE YOUCODE?\n");
    scanf("%s",RAISON);
    printf("________________\n");


    printf("your name is %s and you have %d years old, you choosen youcode because you are %s",NAME,AGE,RAISON);


    return 0;
}
