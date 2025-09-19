#include <stdio.h>

int main()
{
    int valor;
    int n50, n10, n5, n1;

    printf("Caixa Eletronico Weblands\n");
    printf("Digite o valor do saque (0 para sair):\n");

    while (1)
    {
        scanf("%d", &valor);

        if (valor == 0)
        {
            break; // encerra o programa
        }

        // cálculo das notas
        n50 = valor / 50;
        valor = valor % 50;

        n10 = valor / 10;
        valor = valor % 10;

        n5 = valor / 5;
        valor = valor % 5;

        n1 = valor; // resto final

        printf("Notas de 50: %d\n", n50);
        printf("Notas de 10: %d\n", n10);
        printf("Notas de 5 : %d\n", n5);
        printf("Notas de 1 : %d\n", n1);
        printf("------------------------\n");
    }

    printf("Programa encerrado.\n");

    return 0;
}