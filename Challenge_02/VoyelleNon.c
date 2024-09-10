#include <stdio.h>

char LireLeCaractere()
{
    char ch;

    printf("Entrez un caractère : \n");
    scanf("%c",&ch);

    return ch;
}

void verifierSiLeCaractere(char chaa)
{
    switch (chaa)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        printf("Le caractère '%c' est une voyelle.\n",chaa);
        break;
    default:
        printf("Le caractère '%c' n'est pas une voyelle.\n",chaa);
        break;
    }
}

int main()
{
    verifierSiLeCaractere(LireLeCaractere());

    return 0;
}