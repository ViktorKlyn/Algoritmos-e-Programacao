#include <stdio.h>

int main() {
    int vetorA[6], vetorB[6], vetorC[12];
    int i, j = 0;

    // Preenche o vetor A
    printf("Preencha o vetor A:\n");
    for (i = 0; i < 6; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }

    // Preenche o vetor B
    printf("\nPreencha o vetor B:\n");
    for (i = 0; i < 6; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }

    // Intercala A e B no vetor C
    for (i = 0; i < 6; i++) {
        vetorC[j++] = vetorA[i];
        vetorC[j++] = vetorB[i];
    }

    // Mostra o vetor C
    printf("\nVetor C (intercalado):\n");
    for (i = 0; i < 12; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}