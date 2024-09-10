#include <stdio.h>

char LireCaractere()
{
    char alpha;

    printf("Entrez un caractère : \n");
    scanf("%c",&alpha);

    return alpha;
}

void verifierAlphabet(char alpha)
{
    if((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
        if(alpha >= 'A' && alpha <= 'Z')
            printf("Le caractère '%c' est une majuscule.\n",alpha);
        else
            printf("Le caractère '%c' est une minuscule.\n",alpha);
    }
    else
        printf("Le caractère '%c' n'est pas un alphabet.\n",alpha);
}

int main()
{
    char alpha;
    alpha = LireCaractere();

    verifierAlphabet(alpha);

    return 0;
}