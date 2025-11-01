#include <stdio.h>
#include <stdbool.h>

int eh_par(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Digite um numero inteiro para checar se eh par: ");
    if (scanf("%d", &num) != 1)
    {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    if (eh_par(num) == 1)
    {
        printf("\nO numero %d eh PAR\n", num);
    }
    else
    {
        printf("\nO numero %d eh IMPAR\n", num);
    }

    return 0;
}