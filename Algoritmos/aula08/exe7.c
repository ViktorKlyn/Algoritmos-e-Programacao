#include <stdio.h>

int main(){
    int n1, n2;
    double resultado;
    char sinal;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Selecione uma das opcoes [+] [-] [*] [/]: ");
    scanf(" %c", &sinal);

    switch (sinal) {
        case '+': {
            resultado = n1 + n2;
            printf("A soma entre %d + %d eh: %lf", n1, n2, resultado);
            break;
        }
        case '-': {
            resultado = n1 - n2;
            printf("A subtracao de %d - %d eh: %lf", n1, n2, resultado);
            break;
        }
        case '*': {
            resultado = n1 * n2;
            printf("A multiplicacao entre %d * %d eh: %lf", n1, n2, resultado);
            break;
        }
        case '/': {
            resultado = n1 / n2;
            printf("A divisao entre %d / %d eh: %lf", n1, n2, resultado);
            break;
        }
        default: {
            printf("Opcao invalida!");
        }
    }
    return 0;
}