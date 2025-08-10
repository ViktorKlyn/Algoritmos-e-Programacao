#include <stdio.h>

int main() {
    float distancia, tempo, velocidadeMedia;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    velocidadeMedia = distancia / tempo;

    printf("A velocidade media foi: %.2f km/h\n", velocidadeMedia);

    return 0;
}
