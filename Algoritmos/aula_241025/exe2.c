// Ler 5 notas float;
// Pesos: 1, 2, 3, 4, 5;
// Armazenar em um vetor e imprimir a media ponderada;

#include <stdio.h>

int main()
{
    float notas[5];
    int pesos[5] = {1, 2, 3, 4, 5};
    float somaNotas = 0, somaPesos = 0, media;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        somaNotas += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    media = somaNotas / somaPesos;

    printf("A media ponderada final eh: %.2f\n", media);

    return 0;
}