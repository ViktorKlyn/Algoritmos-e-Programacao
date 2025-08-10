#include <stdio.h>

#define PI 3.14159265359

int main() {
    float raio, area, perimetro;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;         // Área = π * r²
    perimetro = 2 * PI * raio;       // Perímetro = 2 * π * r

    printf("Area do circulo: %.2f\n", area);
    printf("Perimetro do circulo: %.2f\n", perimetro);

    return 0;
}