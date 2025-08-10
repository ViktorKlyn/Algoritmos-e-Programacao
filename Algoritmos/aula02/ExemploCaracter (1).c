#include <stdio.h>

int main()
{
    char c1;
    char c2;
    printf("Informe o primeiro caracter:");
    scanf("%c", &c1);
    printf("Informe o segundo caracter:");
    scanf(" %c", &c2);
    printf("C1: %c\nC2: %c", c1, c2);
    return 0;
}
