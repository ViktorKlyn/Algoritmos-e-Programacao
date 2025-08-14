#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, resultado;

    printf("Informe o valor de x:");
    scanf("%lf", &x);
    printf("Informe o valor de y:");
    scanf("%lf", &y);

    resultado = pow(x, y);

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}