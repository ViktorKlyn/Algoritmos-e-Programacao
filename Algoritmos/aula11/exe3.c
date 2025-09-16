#include <stdio.h>

int main() {
    int limite, a = 1, b = 1, proximo;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &limite);

    printf("Série de Fibonacci até %d:\n", limite);

    // Imprime os dois primeiros termos se estiverem dentro do limite
    if (limite >= 1) {
        printf("%d ", a);
    }
    if (limite >= 1 && b <= limite) {
        printf("%d ", b);
    }

    // Calcula os próximos termos
    while (1) {
        proximo = a + b;
        if (proximo > limite) {
            break;
        }
        printf("%d ", proximo);
        a = b;
        b = proximo;
    }

    printf("\n");
    return 0;
}
