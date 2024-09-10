#include <stdio.h>

int LireNumber()
{
    int Number;

    printf("Entrez un nombre :\n");
    scanf("%d",&Number);

    return Number;
}

void verifierNombre(int Number)
{
    if(Number < 0)
        printf("Le nombre %d est négatif.\n",Number);
    else if(Number == 0)
        printf("Le nombre est nul.\n");
    else
        printf("Le nombre %d est positif.\n",Number);
}

int main()
{
    int Number = LireNumber();

    verifierNombre(Number);

    return 0;
}