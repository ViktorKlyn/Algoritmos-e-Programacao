#include <stdio.h>

int main() {
    double salario;

    printf("Digite o salario do funcionario: R$ ");
    scanf("%lf", &salario);

    // reajuste de 5%
    salario = salario * 1.05;

    // abono de 100 para quem recebe até 750
    if (salario <= 750) {
        salario += 100;
    }

    printf("Salario reajustado: R$ %.2lf\n", salario);

    return 0;
}