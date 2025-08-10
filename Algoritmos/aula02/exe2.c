#include <stdio.h>

int main() {
    int numero, quadrado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %d eh: %d\n", numero, quadrado);

    return 0;
}
