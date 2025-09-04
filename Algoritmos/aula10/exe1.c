#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo!\n");
    } else {
        while (i <= n) {
            printf("%d\n", i);
            i++;
        }
    }

    return 0;
}
