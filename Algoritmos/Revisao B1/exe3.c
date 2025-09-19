#include <stdio.h>

int main()
{
    char tipo;
    int tinto = 0, branco = 0, rose = 0, total = 0;

    printf("Digite o tipo de vinho (T = Tinto, B = Branco, R = Rose, F = Fim):\n");

    while (1) // loop infinito até encontrar 'F'
    {
        scanf(" %c", &tipo); // o espaço antes de %c ignora ENTERs e espaços

        if (tipo == 'F' || tipo == 'f')
        {
            break; // para o loop
        }

        if (tipo == 'T' || tipo == 't')
        {
            tinto++;
        }
        else if (tipo == 'B' || tipo == 'b')
        {
            branco++;
        }
        else if (tipo == 'R' || tipo == 'r')
        {
            rose++;
        }
        else
        {
            printf("Tipo invalido! Use T, B, R ou F.\n");
        }
    }

    total = tinto + branco + rose;

    printf("\nLevantamento do estoque:\n");
    printf("Tintos : %d\n", tinto);
    printf("Brancos: %d\n", branco);
    printf("Rose   : %d\n", rose);
    printf("Total  : %d\n", total);

    return 0;
}