#include <stdio.h>

int main() {
    int i, qtdNegativos = 0;
    double num, somaPositivos = 0;

    printf("Digite 15 numeros reais:\n");

    for (i = 1; i <= 15; i++) {
        printf("Numero %d: ", i);
        scanf("%lf", &num);

        if (num > 0) {
            somaPositivos += num;
        } else if (num < 0) {
            qtdNegativos++;
        }
    }

    printf("\nSoma dos valores positivos: %.2lf\n", somaPositivos);
    printf("Quantidade de valores negativos: %d\n", qtdNegativos);

    return 0;
}
