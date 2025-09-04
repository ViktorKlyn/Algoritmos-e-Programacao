#include <stdio.h>

int main() {
    int i = 1;
    double numero, soma = 0, media;

    while (i <= 10) {
        printf("Digite o %dº numero: ", i);
        scanf("%lf", &numero);
        soma += numero;
        i++;
    }

    media = soma / 10;

    printf("A media dos numeros digitados é: %.2lf\n", media);

    return 0;
}
