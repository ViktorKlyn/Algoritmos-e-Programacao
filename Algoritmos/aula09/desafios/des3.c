#include <stdio.h>

int main() {
    double num1, num2, resultado;
    int opcao;

    // Entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // Exibir menu
    printf("\nEscolha uma opcao:\n");
    printf("1 - Soma de 2 numeros\n");
    printf("2 - Diferenca entre 2 numeros (maior - menor)\n");
    printf("3 - Produto entre 2 numeros\n");
    printf("4 - Divisao entre 2 numeros\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Processar opcao
    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2lf\n", resultado);
            break;

        case 2:
            if (num1 > num2)
                resultado = num1 - num2;
            else
                resultado = num2 - num1;
            printf("Resultado da diferenca: %.2lf\n", resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("Resultado do produto: %.2lf\n", resultado);
            break;

        case 4:
            if (num2 == 0) {
                printf("Erro! Divisao por zero nao permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2lf\n", resultado);
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
