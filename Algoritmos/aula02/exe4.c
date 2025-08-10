#include <stdio.h>

int main() {
    float preco, precoComDesconto;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    precoComDesconto = preco * 0.91;  // Aplica desconto de 9%

    printf("Preco com desconto de 9%%: %.2f\n", precoComDesconto);

    return 0;
}
