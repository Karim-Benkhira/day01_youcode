#include <stdio.h>

int Lire2NumberSome()
{
    int Number1;
    int Number2;

    printf("Entrez la première valeur : \n");
    scanf("%d",&Number1);

    printf("Entrez la deuxième valeur : \n");
    scanf("%d",&Number2);

    return Number1 + Number2;
}

void PrintSome(int sum)
{
    printf("La somme des deux valeurs est : %d\n",sum);
}

int main()
{
    PrintSome(Lire2NumberSome());

    return 0;
}