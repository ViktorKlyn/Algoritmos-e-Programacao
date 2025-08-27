#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
        printf("Ambos os numeros informados sao pares!");
    } else if(n1 % 2 == 0 || n2 % 2 == 0)
    {
        printf("Um numero informado eh par!");
    } else{
        printf("Nemhum numero informado eh par!");
    }
    
    return 0;
}