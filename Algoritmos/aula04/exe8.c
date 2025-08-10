#include <stdio.h>

int main() {
    int numero, dezenas;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);

    // Remove as unidades e pega a dezena
    dezenas = (numero / 10) % 10;

    printf("O algarismo da casa das dezenas é: %d\n", dezenas);

    return 0;
}
