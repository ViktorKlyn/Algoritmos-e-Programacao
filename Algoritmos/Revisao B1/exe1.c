#include <stdio.h>

int main()
{
    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("Alimento nao perecivel");
        break;

    case 2:
        printf("Alimento perecivel");
        break;

    case 3:
        printf("Vestuario");
        break;

    case 4:
        printf("Limpeza");
        break;

    default:
        printf("Codigo Invalido");
        break;
    }

    return 0;
}