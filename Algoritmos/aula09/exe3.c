#include <stdio.h>

int main() {
    int num, soma = 0, qtd = 0;
    double media;

    printf("Digite varios numeros inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break; // encerra o loop
        }

        soma += num;
        qtd++;
    }

    if (qtd > 0) {
        media = (double)soma / qtd;
        printf("Soma = %d\n", soma);
        printf("Media = %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi digitado!\n");
    }

    return 0;
}