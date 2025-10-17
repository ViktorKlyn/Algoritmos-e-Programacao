#include <stdio.h>

int main()
{
    int n;
    printf("Quantos alunos tem na sala? ");
    scanf("%d", &n);

    float notas[n];
    float soma = 0.0;

    for(int i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / n;
    printf("A média geral da sala é: %.2f\n", media);

    return 0;
}