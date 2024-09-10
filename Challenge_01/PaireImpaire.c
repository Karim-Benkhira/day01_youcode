#include <stdio.h>

int LireNumber()
{
    int Number;

    printf("Entrez un nombre entier : \n");
    scanf("%d",&Number);

    return Number;
}

void pairOuImpair(int Number)
{
    if(Number % 2 == 0)
        printf("Le nombre %d est Pair.\n",Number);
    else
        printf("Le nombre %d est Impair.\n",Number);
}

int main()
{
    pairOuImpair(LireNumber());

    return 0;
}