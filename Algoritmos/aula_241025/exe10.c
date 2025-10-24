#include <stdio.h>
#include <time.h>

#define TAM 5000

int main() {
    static int matriz[TAM][TAM]; // 'static' evita stack overflow (grande demais)
    clock_t inicio, fim;
    double tempo_otimizado, tempo_nao_otimizado;

    // Inicializa a matriz com valores simples
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = i + j;
        }
    }

    long long soma = 0;

    // --- A) Acesso Otimizado (Cache-Friendly) ---
    inicio = clock();
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            soma += matriz[i][j];
        }
    }
    fim = clock();
    tempo_otimizado = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Soma (otimizado): %lld\n", soma);
    printf("Tempo acesso otimizado: %.3f segundos\n\n", tempo_otimizado);

    soma = 0; // zera pra medir o outro acesso

    // --- B) Acesso Nao Otimizado (Cache-Unfriendly) ---
    inicio = clock();
    for (int j = 0; j < TAM; j++) {
        for (int i = 0; i < TAM; i++) {
            soma += matriz[i][j];
        }
    }
    fim = clock();
    tempo_nao_otimizado = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Soma (nao otimizado): %lld\n", soma);
    printf("Tempo acesso nao otimizado: %.3f segundos\n", tempo_nao_otimizado);

    printf("\nDiferenca de tempo: %.3f segundos\n", tempo_nao_otimizado - tempo_otimizado);

    return 0;
}
