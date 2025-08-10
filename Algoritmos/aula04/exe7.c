#include <stdio.h>

int main() {
    double custoFabrica, custoConsumidor;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%lf", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

    printf("O custo ao consumidor é: R$ %.2lf\n", custoConsumidor);

    return 0;
}
