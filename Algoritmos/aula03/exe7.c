#include <stdio.h>

int main() {
    int num1, num2;

    // Lendo números não nulos
    do {
        printf("Digite o primeiro numero inteiro (nao nulo): ");
        scanf("%d", &num1);
    } while (num1 == 0);

    do {
        printf("Digite o segundo numero inteiro (nao nulo): ");
        scanf("%d", &num2);
    } while (num2 == 0);

    // Calculando operações
    int soma = num1 + num2;
    int multiplicacao = num1 * num2;
    int subtracao = num1 - num2;
    int divisao = num1 / num2;       // divisão inteira
    int resto = num1 % num2;

    // Mostrando resultado
    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Subtracao: %d\n", subtracao);
    printf("Divisao inteira: %d\n", divisao);
    printf("Resto da divisao: %d\n", resto);

    return 0;
}