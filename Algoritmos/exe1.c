#include <stdio.h>
#include <math.h>

int main()
{
    double num, qua, cubo;
    printf("Digite um numero qualquer:");
    scanf("%lf", &num);

    qua = pow(num, 2);
    cubo = pow(num, 3);

    printf("Quadrada: %.2lf\n", qua);
    printf("Cubo: %.2lf", cubo);

    return 0;
}