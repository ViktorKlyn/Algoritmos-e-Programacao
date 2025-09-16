#include <stdio.h>

int main() {
    int i, soma = 0;

    printf("Múltiplos de 7 entre 100 e 200:\n");

    for (i = 100; i <= 200; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos múltiplos de 7: %d\n", soma);

    return 0;
}