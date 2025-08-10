#include <stdio.h>

int main() {
    float saldo, saldoReajustado;

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo);

    saldoReajustado = saldo * 1.01; // Reajuste de 1%

    printf("Saldo reajustado em 1%%: %.2f\n", saldoReajustado);

    return 0;
}
