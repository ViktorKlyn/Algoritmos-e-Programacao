#include <stdio.h>
#include <math.h>

int main()
{
    double angulo, seno, cosseno, tangente;
    printf("Informe o valor do angulo:");
    scanf("%lf", &angulo);

    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);

    printf("Seno: %.2lf\n", seno);
    printf("Cosseno: %.2lf\n", cosseno);
    printf("Tangente: %.2lf\n", tangente);

    return 0;
}