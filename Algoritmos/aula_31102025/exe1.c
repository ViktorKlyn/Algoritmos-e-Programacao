#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    int linha_alvo = 1; 
    int coluna_alvo = 2; 
    int valor = matriz[linha_alvo][coluna_alvo];

    printf("--- Matriz 3x3 (M[i][j] = i + j) ---\n");
   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------\n");

    printf("O valor do elemento na segunda linha (indice 1) e ");
    printf("terceira coluna (índice 2) eh: %d\n", valor);
    printf("Isso eh calculado como i+j, ou seja, 1 + 2 = 3.\n");

    return 0;
}