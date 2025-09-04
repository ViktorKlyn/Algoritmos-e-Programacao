#include <stdio.h>
#include <limits.h> // INT_MIN e INT_MAX

int main() {
    int numero;
    int maior = INT_MIN;
    int menor = INT_MAX;

    printf("Digite numeros inteiros (digite 0 para sair):\n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

    } while (numero != 0);

    if (maior == INT_MIN && menor == INT_MAX) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        printf("O maior numero digitado foi: %d\n", maior);
        printf("O menor numero digitado foi: %d\n", menor);
    }

    return 0;
}
