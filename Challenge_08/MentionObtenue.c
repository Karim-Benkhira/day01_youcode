#include <stdio.h>

double LireMoyenne()
{
    double Moyenne;

    printf("Entrez la moyenne : \n");
    scanf("%lf",&Moyenne);

    return Moyenne;
}

void determinerMention(double Moyenne)
{
    if(Moyenne < 10)
        printf("Mention obtenue : Recalé\n");
    else if(Moyenne >= 10 && Moyenne < 12)
        printf("Mention obtenue : Passable\n");
    else if (Moyenne >= 12 && Moyenne < 14)
        printf("Mention obtenue : Assez bien\n");
    else if(Moyenne >= 14 && Moyenne < 16)
        printf("Mention obtenue : Bien\n");
    else
        printf("Mention obtenue : Très bien\n");
}

int main()
{
    double Moyenne = LireMoyenne();

    determinerMention(Moyenne);

    return 0;
}