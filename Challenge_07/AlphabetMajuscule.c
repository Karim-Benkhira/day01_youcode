#include <stdio.h>

char Lirechar()
{
    char caractere;

    printf("Entrez un caractère : \n");
    scanf("%c",&caractere);

    return caractere;
}

void verifierMajuscule(char caractere)
{
    if(caractere >= 'A' && caractere <= 'Z')
        printf("Le caractère '%c' est une majuscule.\n",caractere);
    else
        printf("Le caractère '%c' n'est pas une majuscule.\n",caractere);
}

int main()
{
    char caractere = Lirechar();

    verifierMajuscule(caractere);

    return 0;
}