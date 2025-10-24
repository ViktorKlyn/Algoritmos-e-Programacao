#include <stdio.h>

// função que dobra os valores do vetor
void dobrar_valores(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = vetor[i] * 2;
    }
}

int main() {
    int vetor[5];

    // entrada dos valores
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // chama a função pra dobrar
    dobrar_valores(vetor, 5);

    // exibe o vetor alterado
    printf("\n=== Vetor apos dobrar os valores ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}