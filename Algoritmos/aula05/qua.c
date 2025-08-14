#include <stdio.h>
#include <math.h>

int main()
{
    double num, raiz;

    printf("Digite um numero:");
    scanf("%lf", &num);

    raiz = sqrt(num);

    printf("A raiz do numero eh: %.2lf\n", raiz);

    return 0;
}