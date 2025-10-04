#include <stdio.h>

int main()
{
    int qtdAlunos;
    float media, acum = 0;
    float menorNota = 200;
    float maiorNota = -200;

    printf("Quantos alunos tem na sala? ");
    scanf("%d", &qtdAlunos);

    float notas[qtdAlunos];

    for (int cont = 0; cont < qtdAlunos; cont++)
    {
        do
        {
            printf("Qual a nota do aluno %d? ", cont + 1);
            scanf("%f", &notas[cont]);
            if (notas[cont] < 0 || notas[cont] > 100)
                printf("Nota inválida! Digite uma nota entre 0 e 100.\n");
        } while (notas[cont] < 0 || notas[cont] > 100);

        if (notas[cont] > maiorNota)
        {
            maiorNota = notas[cont];
        }
        if (notas[cont] < menorNota)
        {
            menorNota = notas[cont];
        }
        acum += notas[cont];
    }

    printf("\nNotas dos alunos:\n");
    for (int cont = 0; cont < qtdAlunos; cont++)
    {
        printf("Aluno %d: %.1f\n", cont + 1, notas[cont]);
    }

    media = acum / qtdAlunos;

    printf("\nMédia da turma: %.2f\n", media);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Maior nota: %.2f\n", maiorNota);

    return 0;
}