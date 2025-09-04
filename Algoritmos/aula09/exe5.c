#include <stdio.h>

int main() {
    int i, num, soma = 0;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos 10 numeros digitados eh: %d\n", soma);

    return 0;
}
