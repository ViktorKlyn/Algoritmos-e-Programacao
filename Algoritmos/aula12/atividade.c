#include <stdio.h>

int main() {
    int opcao, i = 0;
    double nota, soma = 0, maior = -1e9, menor = 1e9, media;

    do {
        printf("\nSelecione uma das opcoes abaixo\n");
        printf("--------------------------\n");
        printf("1 - Lancar Nota\n");
        printf("2 - Exibir Media\n");
        printf("3 - Exibir Maior Nota\n");
        printf("4 - Exibir Menor Nota\n");
        printf("5 - Sair\n");
        printf("--------------------------\n");
        printf("Opcao selecionada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Inserir nota: ");
                scanf("%lf", &nota);
                soma += nota;
                i++;
                if (nota > maior) maior = nota;
                if (nota < menor) menor = nota;
                break;

            case 2:
                if (i == 0) {
                    printf("Nenhuma nota lancada ainda!\n");
                } else {
                    media = soma / i;
                    printf("A media eh: %.2lf\n", media);
                }
                break;

            case 3:
                if (i == 0) {
                    printf("Nenhuma nota lancada ainda!\n");
                } else {
                    printf("A maior nota eh: %.2lf\n", maior);
                }
                break;

            case 4:
                if (i == 0) {
                    printf("Nenhuma nota lancada ainda!\n");
                } else {
                    printf("A menor nota eh: %.2lf\n", menor);
                }
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}
