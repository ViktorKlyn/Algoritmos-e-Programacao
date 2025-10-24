// Declarar um vetor de 8 posições tipo int;
// Pedir para o usuário prenncher esses valores;
// Depois imprima os valores na ordem invresa;

#include <stdio.h>

int main()
{
    int vetor[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Digite qualquer numero inteiro: ");
        scanf("%d", &vetor[i]);   
    }

    printf("\n");
    printf("Valores em ordem decrescente: \n");
    printf("\n");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}