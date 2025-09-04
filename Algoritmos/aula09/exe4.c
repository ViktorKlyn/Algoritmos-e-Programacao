#include <stdio.h>

int main() {
    int num, maior, menor;
    int primeiro = 1; // flag para saber se é o primeiro número válido

    printf("Digite varios numeros inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break; // encerra o loop
        }

        if (primeiro) {
            maior = num;
            menor = num;
            primeiro = 0;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    if (primeiro) {
        printf("Nenhum numero valido foi digitado!\n");
    } else {
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
    }

    return 0;
}