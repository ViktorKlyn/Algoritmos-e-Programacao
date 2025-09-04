#include <stdio.h>

int main() {
    int n, i, num;
    int somaPares = 0, somaImpares = 0, qtdImpares = 0;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            somaPares += num;
        } else {
            somaImpares += num;
            qtdImpares++;
        }
    }

    printf("\nSoma dos numeros pares: %d\n", somaPares);

    if (qtdImpares > 0) {
        double mediaImpares = (double)somaImpares / qtdImpares;
        printf("Media dos numeros impares: %.2f\n", mediaImpares);
    } else {
        printf("Nenhum numero impar foi digitado!\n");
    }

    return 0;
}