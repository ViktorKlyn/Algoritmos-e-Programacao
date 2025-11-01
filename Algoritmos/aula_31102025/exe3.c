#include <stdio.h>

#define LINHAS_A 2
#define COLUNAS_A 3

#define LINHAS_B COLUNAS_A
#define COLUNAS_B LINHAS_A

int main()
{
    int matriz_A[LINHAS_A][COLUNAS_A] = {
        {10, 20, 30},
        {40, 50, 60}  
    };

    int matriz_B[LINHAS_B][COLUNAS_B];

    int i, j;

    for (i = 0; i < LINHAS_A; i++)
    {
        for (j = 0; j < COLUNAS_A; j++)
        {
            matriz_B[j][i] = matriz_A[i][j];
        }
    }

    printf("--- Matriz A (%dx%d) ---\n", LINHAS_A, COLUNAS_A);
    for (i = 0; i < LINHAS_A; i++)
    {
        for (j = 0; j < COLUNAS_A; j++)
        {
            printf("[%d] ", matriz_A[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matriz B (Transposta de A - %dx%d) ---\n", LINHAS_B, COLUNAS_B);
    for (i = 0; i < LINHAS_B; i++)
    {
        for (j = 0; j < COLUNAS_B; j++)
        {
            printf("[%d] ", matriz_B[i][j]);
        }
        printf("\n");
    }

    return 0;
}