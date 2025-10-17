#include <stdio.h>
#define palavras 9

int main()
{
    int i;
    char texto[palavras] = "PARABENS";

    for (i = 0; i < palavras; i++)
    {
        printf("%c\n", texto[i]);
    }

    return 0;
}