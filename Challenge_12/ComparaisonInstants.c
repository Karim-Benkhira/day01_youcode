#include <stdio.h>


void lireTemps(int *heure,int *minutes,int *secondes)
{
    scanf("%d%d%d",heure,minutes,secondes);
}

int comparerTemps(int h1,int h2,int m1,int m2,int s1,int s2)
{
    if(h1 > h2)
        return -1;
    if(h1 > h2)
        return 1;
    
    if(m1 < m2)
        return -1;
    if(m1 > m2)
        return 1;

    if(s1 < s2)
        return -1;
    if(s1 > s2)
        return 1;

    return 0;
}

void resulta(int resulta)
{
    if(resulta < 0)
        printf("Le premier instant vient avant le deuxième.\n");
    else if(resulta > 0)
        printf("Le deuxième instant vient avant le premier.\n");
    else
        printf("Il s'agit du même instant.\n");
}

int main()
{
    int h1,h2,m1,m2,s1,s2;

        printf("Entrez le premier instant (HH:MM:SS) : ");
        lireTemps(&h1,&m1,&s1);

        printf("Entrez le deuxième instant (HH:MM:SS) : ");
        lireTemps(&h2,&m2,&s2);

        int resultat = comparerTemps(h1, m1, s1, h2, m2, s2);

        resulta(resultat);

        return 0;
}