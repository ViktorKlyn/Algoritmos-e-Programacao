#include <stdio.h>

int main() {
    float numero, resultado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    resultado = numero * 0.04; // 4% do valor

    printf("4%% de %.2f eh: %.2f\n", numero, resultado);

    return 0;
}