#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *notas, soma = 0, media;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);

    notas = (float*)malloc(n * sizeof(float));
    if (notas == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite a media final do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / n;

    printf("\nMedias finais dos alunos:\n");
    for (i = 0; i < n; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }
    printf("\nMedia da turma: %.2f\n", media);

    free(notas);

    return 0;
}