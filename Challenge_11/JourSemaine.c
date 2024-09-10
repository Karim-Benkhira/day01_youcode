#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genererIndiceAleatoire()
{
    return rand() % 7;
}

void afficherJour(int index)
{
        char* jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};

        printf("Jour aléatoire de la semaine: %s\n", jours[index]);
}

int main()
{
    srand(time(NULL));

    int Index = genererIndiceAleatoire();

    afficherJour(Index);

    return 0;
}