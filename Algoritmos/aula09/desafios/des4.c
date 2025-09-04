#include <stdio.h>
#include <math.h> // para usar ceil()

int main() {
    int h1, m1, h2, m2;
    int chegada, partida, duracaoMinutos, duracaoHoras;
    double preco = 0;

    // Entrada de dados
    printf("Digite hora e minuto de chegada (hh mm): ");
    scanf("%d %d", &h1, &m1);

    printf("Digite hora e minuto de partida (hh mm): ");
    scanf("%d %d", &h2, &m2);

    // Converter tudo para minutos
    chegada = h1 * 60 + m1;
    partida = h2 * 60 + m2;

    // Se partida < chegada, significa que passou para o dia seguinte
    if (partida < chegada) {
        partida += 24 * 60;
    }

    // Calcular duração em minutos
    duracaoMinutos = partida - chegada;

    // Converter para horas (arredondando para cima)
    duracaoHoras = (int)ceil(duracaoMinutos / 60.0);

    // Calcular preço
    if (duracaoHoras <= 2) {
        preco = duracaoHoras * 1.0;
    } else if (duracaoHoras <= 4) {
        preco = 2 * 1.0 + (duracaoHoras - 2) * 1.4;
    } else {
        preco = 2 * 1.0 + 2 * 1.4 + (duracaoHoras - 4) * 2.0;
    }

    printf("Tempo estacionado: %d horas\n", duracaoHoras);
    printf("Preco a pagar: R$ %.2f\n", preco);

    return 0;
}
