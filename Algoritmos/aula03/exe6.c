#include <stdio.h>

int main() {
    float a, b, c, x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    x = 2 * ((a - c) / 8) - b * 5;

    printf("Resultado de x = %.2f\n", x);

    return 0;
}