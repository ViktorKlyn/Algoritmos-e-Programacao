#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("Em ordem crescente: %d, %d", num1, num2);
    } else{
        printf("Em ordem crescente: %d, %d", num2, num1);
    }
    
    return 0;
}