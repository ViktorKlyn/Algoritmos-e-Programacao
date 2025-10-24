#include <stdio.h>

int main()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz completa: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nElementos na diagonal principal: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("[%d]\n", matriz[i][i]);
    }
    
    return 0;
}