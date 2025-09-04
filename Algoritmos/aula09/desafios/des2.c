#include <stdio.h>

int main() {
    double base, altura, area, perimetro;

    printf("Digite a base: ");
    scanf("%lf", &base);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    if (base == altura) {
        printf("QUADRADO\n");
    } else {
        area = base * altura;
        perimetro = 2 * (base + altura);

        printf("RETANGULO\n");
        printf("Area: %.2lf\n", area);
        printf("Perimetro: %.2lf\n", perimetro);
    }

    return 0;
}