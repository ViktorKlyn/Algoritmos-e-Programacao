#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo!\n");
    } else {
        while (n >= 1) {
            printf("%d ", n);
            n--;
        }
        printf("\n");
    }

    return 0;
}
