#include <stdio.h>

int main()
{
    int total, branco = 0, tinto = 0, rose = 0;
    char opcao;

    printf("Informe o vinho: ");
    scanf(" %c", &opcao);
    printf("----------------------\n");

    while (opcao != 'F')
    {
        switch (opcao)
        {
        case 'B':
            ++branco;
            break;

        case 'T':
            ++tinto;
            break;

        case 'R':
            ++rose;
            break;

        default:
            printf("Opcao Invalida!\n");
            break;
        }
        printf("Informe o vinho: ");
        scanf(" %c", &opcao);
        printf("----------------------\n");
    }

    total = branco + tinto + rose;
    printf("Total de vinhos: %d\n", total);
    printf("Total de vinhos brancos: %d\n", branco);
    printf("Total de vinhos tintos: %d\n", tinto);
    printf("Total de vinhos rose: %d", rose);

    return 0;
}