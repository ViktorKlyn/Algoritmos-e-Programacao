#include <stdio.h>

int main() {
    int numero;
    int soma = 0, quantidade = 0;
    double media;

    printf("Digite numeros inteiros (digite 0 para sair):\n");

    while (1) { // loop infinito até o usuário digitar 0
        scanf("%d", &numero);

        if (numero == 0) {
            break; // sai do loop
        }

        soma += numero;
        quantidade++;
    }

    if (quantidade > 0) {
        media = (double)soma / quantidade;
        printf("Soma dos numeros: %d\n", soma);
        printf("Media dos numeros: %.2lf\n", media);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}
