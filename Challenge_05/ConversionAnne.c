#include <stdio.h>

int lireAnnees()
{
    int Anne;

    printf("Entrez le nombre d'années :");
    scanf("%d",&Anne);

    return Anne;
}

int afficherMenu()
{
    int choix;

    printf("Choisissez une option de conversion :\n");
    printf("1. Années en Mois\n");
    printf("2. Années en Jours\n");
    printf("3. Années en Heures\n");
    printf("4. Années en Minutes\n");
    printf("5. Années en Secondes\n");
    printf("Votre choix : ");
    scanf("%d",&choix);

    return choix;
}

void convertir(int annees,int choix)
{
    switch (choix)
    {
        case 1:
            printf("%d années correspondent à %d mois.\n",annees,annees * 12);
            break;
        case 2:
            printf("%d années correspondent à %d jours.\n",annees,annees * 365);
            break;
        case 3:
            printf("%d années correspondent à %d heures.\n",annees,annees * 365 * 24);
            break;
        case 4:
            printf("%d années correspondent à %d minutes.\n",annees,annees * 365 * 24 * 60);
            break;
        case 5:
            printf("%d années correspondent à %d secondes.\n",annees,annees * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Choix non valide.\n");
            break;
    }
}

int main()
{
    int annes = lireAnnees();
    int choix = afficherMenu();

    convertir(annes,choix);

    return 0;
}