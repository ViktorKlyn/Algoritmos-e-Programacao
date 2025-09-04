#include <stdio.h>

int main() {
    int numero, i = 0, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O numero deve ser positivo!\n");
        return 0;
    }

    while (i <= numero) {
        soma += i;
        i++;
    }

    printf("A soma de 0 até %d é: %d\n", numero, soma);

    return 0;
}
