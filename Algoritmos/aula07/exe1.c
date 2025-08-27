#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o priemiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 == n2)
    {
        printf("Os numeros sao iguais!");
    } else{
        printf("Os numeros sao diferentes!");
    }

    return 0;
}