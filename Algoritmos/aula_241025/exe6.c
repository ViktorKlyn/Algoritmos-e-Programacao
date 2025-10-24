#include <stdio.h>

int main() {
    int matriz[5][5];
    int contador = 0;

    // Preenchendo a matriz
    printf("Preencha a matriz 5x5 com numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Contando os números maiores que 10
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    // Exibindo a matriz completa
    printf("\nMatriz completa:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%3d] ", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultado final
    printf("\nQuantidade de elementos maiores que 10: %d\n", contador);

    return 0;
}
