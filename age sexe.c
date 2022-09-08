#include <stdio.h>
#include <stdlib.h>

int main()
{
    float age;
    char sexe;
    printf("entree votre age: \n");
    scanf("%f",&age);
    printf("sexe F ou H: \n");
    scanf(" %c",&sexe);
    if(age>=20 && sexe=='H')
        printf("POSABLE");
        else if (age>=18 && age<=35 && sexe=='F')
        printf("POSABLE");
        else
            printf("IMPOSABLE");


    return 0;
}
