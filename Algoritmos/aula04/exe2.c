#include <stdio.h>

int main() {
    int idade, diasVividos;

    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);

    diasVividos = idade * 365; // cálculo aproximado

    printf("Voce viveu aproximadamente %d dias.\n", diasVividos);

    return 0;
}