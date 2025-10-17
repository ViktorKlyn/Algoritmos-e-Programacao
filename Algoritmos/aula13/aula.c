#include <stdio.h>
#include <math.h>

int main()
{
    double pi, soma;
    int i, j;

    printf("Digite o numero de iteracoes para calcular o pi: ");
    scanf("%d", &j);

    soma = 0;
    for ( i = 0; i < j; i++)
    {
        if (i % 2 == 0)
        {
            soma = soma + 1.0 / (2 * i + 1);
        }
        
    }
    
    return 0;
}