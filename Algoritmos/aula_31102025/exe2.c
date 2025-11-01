#include <stdio.h>

int main()
{
    int matriz[4][4] = {
        {1, 5, 9, 13},
        {2, 6, 10, 14},
        {3, 7, 11, 15},
        {4, 8, 12, 16}
    };

    int soma_diagonal = 0;
    int i; 

    printf("--- Matriz 4x4 ---\n");
    
    for (i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                printf("[*%d*] ", matriz[i][j]);
            }
            else
            {
                printf("%d", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("------------------\n");

    printf("Elementos da Diagonal Principal (M[i][i]): ");
    for (i = 0; i < 4; i++)
    {
        soma_diagonal += matriz[i][i];

        printf("%d%s", matriz[i][i], (i < 3 ? " + " : ""));
    }

    printf("\n\nA soma dos elementos da diagonal principal eh: %d\n", soma_diagonal);

    return 0;
}