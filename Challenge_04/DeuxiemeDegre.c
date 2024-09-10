#include <stdio.h>
#include <math.h>

void EquationDuDeuxiemeDegre()
{
    double a,b,c;
    double Delta,x1,x2;

    printf("Entrez le coefficient a : \n");
    scanf("%lf",&a);
    printf("Entrez le coefficient b : \n");
    scanf("%lf",&b);
    printf("Entrez le coefficient c : \n");
    scanf("%lf",&c);

    Delta = b * b - 4 * a * c;

    if (Delta > 0)
    {
        x1 = (-b + sqrt(Delta)) / (2 * a);
        x2 = (-b - sqrt(Delta)) / (2 * a);

        printf("Il y a deux solutions réelles et distinctes : x1 = %.2lf et x2 = %.2lf\n",x1,x2);
    }
    else if(Delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Il y a une solution réelle et répétée : x = %.2lf\n",x1);
    }
    else
    {
        printf("Il n'y a pas de solutions réelles.\n");
    }
}

int main()
{
    EquationDuDeuxiemeDegre();
    return 0;
}
