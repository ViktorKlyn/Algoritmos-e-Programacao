#include <stdio.h>

int main() {
    int num1, num2;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    media = (num1 + num2) / 2.0;

    printf("A media entre %d e %d eh: %.2f\n", num1, num2, media);

    return 0;
}