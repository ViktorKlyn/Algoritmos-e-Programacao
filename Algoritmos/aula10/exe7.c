#include <stdio.h>

int main() {
    int n, i = 1, numero;
    int soma_pares = 0, soma_impares = 0, qtd_impares = 0;
    double media_impares = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            soma_pares += numero;
        } else {
            soma_impares += numero;
            qtd_impares++;
        }

        i++;
    }

    if (qtd_impares > 0) {
        media_impares = (double)soma_impares / qtd_impares;
    }

    printf("\nSoma dos numeros pares: %d\n", soma_pares);
    if (qtd_impares > 0) {
        printf("Media dos numeros impares: %.2lf\n", media_impares);
    } else {
        printf("Nao foram digitados numeros impares.\n");
    }

    return 0;
}
