#include <stdio.h>

int main()
{
    int ra;
    double nota1, nota2, nota3, notaExercicio, media;

    printf("Numero de registro do aluno: ");
    scanf("%d", &ra);
    printf("-----------------------------------------\n");
    printf("Digite as 3 notas do aluno: \n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    printf("-----------------------------------------\n");
    printf("Digite a nota dos exercicios do aluno: \n");
    scanf("%lf", &notaExercicio);
    printf("-----------------------------------------\n");

    printf("Registro Aluno: %d\n", ra);
    printf("Notas: %.2lf, %.2lf, %.2lf\n", nota1, nota2, nota3);
    printf("Nota dos Exercicios: %.2lf\n", notaExercicio);

    media = (nota1 + nota2 * 2 + nota3 * 3 + 3 + notaExercicio) / 7;
    printf("Media Final: %.2lf\n", media);

    if (media >= 90)
    {
        printf("A - Aprovado Pro Max!");
    }
    else if (media >= 75 && media < 90)
    {
        printf("B - Aprovado!");
    }
    else if (media >= 60 && media < 75)
    {
        printf("C - Recuperacao!");
    }
    else if (media >= 40 && media < 60)
    {
        printf("D - Reprovado!");
    }
    else
    {
        printf("E - Reprovado Pro Max");
    }

    return 0;
}