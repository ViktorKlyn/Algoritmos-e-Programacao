#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double delta, x1, x2;

    printf("Digite o valor de (a): ");
    scanf("%lf", &a);

    printf("Digite o valor de (b): ");
    scanf("%lf", &b);

    printf("Digite o valor de (c): ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("Nao eh uma equacao de 2o grau!\n");
    } else{
        delta = (b * b) - (4 * a *c);
    }

    if (delta < 0)
    {
        printf("Nao existem raizes reais!\n");
    } else if(delta == 0){
        x1 = -b / (2 * a);
        printf("Existe apenas uma raiz real: x = %.2lf\n", x1);
    } else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes reais sao: %.2lf, %.2lf", x1, x2);
    }
    
    return 0;
}