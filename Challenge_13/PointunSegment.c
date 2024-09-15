#include <stdio.h>
#include <math.h>

int V_parallelisme(float xA,float yA,float xB,float yB,float xP,float yP)
{
    return ((xP - xA) * (yB - yA) == (yP - yA) * (xB - xA));
}

int V_borne(float xA, float yA, float xB, float yB, float xP, float yP)
{
    return (xP >= fmin(xA, xB) && xP <= fmax(xA, xB) &&
            yP >= fmin(yA, yB) && yP <= fmax(yA, yB));
}

int main()
{
    float xA, yA, xB, yB, xP, yP;

    printf("Entrez A (xA yA) : ");
    scanf("%f %f", &xA, &yA);
    
    printf("Entrez B (xB yB) : ");
    scanf("%f %f", &xB, &yB);
    
    printf("Entrez P (xP yP) : ");
    scanf("%f %f", &xP, &yP);

    if (V_parallelisme(xA, yA, xB, yB, xP, yP)) {
        if (V_borne(xA, yA, xB, yB, xP, yP)) {
            printf("Le point est sur le segment.\n");
        } else {
            printf("Le point n'est pas sur le segment.\n");
        }
    } else {
        printf("Le point n'est pas sur le segment.\n");
    }

    return 0;
}