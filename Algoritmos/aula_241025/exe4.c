#include <stdio.h>

int main()
{
    int matriz[4][5];
    int somaLinha3 = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz completa: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        somaLinha3 += matriz[2][j];
    }

    printf("\nA soma dos elementos da terceira linha eh: %d", somaLinha3);

    return 0;
}
