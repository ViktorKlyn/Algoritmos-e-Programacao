#include <stdio.h>

int main() {
    int numero, i = 1;
    unsigned long long fatorial = 1; 

    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido!\n");
        return 0;
    }

    while (i <= numero) {
        fatorial *= i;
        i++;
    }

    printf("O fatorial de %d é: %llu\n", numero, fatorial);

    return 0;
}
