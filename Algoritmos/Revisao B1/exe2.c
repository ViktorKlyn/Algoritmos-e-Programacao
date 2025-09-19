#include <stdio.h>

int main()
{
    int ra;
    double nota1, nota2, nota3, notaExe, media;

    printf("Digite o RA do aluno: ");
    scanf("%d", &ra);

    printf("Digite as 3 notas do aluno: \n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    printf("Digite a nota de trabalho do aluno: ");
    scanf("%lf", &notaExe);

    media = (nota1 + nota2 * 2 + nota3 * 3 + notaExe) / 7;

    printf("\nRA do aluno: %d\n", ra);
    printf("Notas: %.2lf, %.2lf, %.2lf\n", nota1, nota2, nota3);
    printf("Nota dos exercicios: %.2lf\n", notaExe);
    printf("A media final eh: %.2lf\n", media);

    if (media > 90)
    {
        printf("Conceito: A - Aprovado Pro Max\n");
    }
    else if (media >= 75 && media < 90)
    {
        printf("Conceito: B - Aprovado\n");
    }
    else if (media >= 60 && media < 75)
    {
        printf("Conceito: C - Recuperacao\n");
    }
    else if (media >= 40 && media < 60)
    {
        printf("Conceito: D - Reprovado\n");
    }
    else
    {
        printf("Conceito: E - Reprovado Pro Max\n");
    }

    return 0;
}