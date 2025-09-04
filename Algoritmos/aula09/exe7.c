#include <stdio.h>

int main() {
    int i, num;
    int maior, menor;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        if (i == 1) {  
            // Inicializa maior e menor com o primeiro número
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
