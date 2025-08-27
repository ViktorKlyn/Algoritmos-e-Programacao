#include <stdio.h>

int main(){
    int n1, n2, adc;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    adc = n1 + n2;

    if (adc >= 10)
    {
        printf("O resultado eh: %d", adc);
    } else{
        printf("Soma menor do que 10!");
    }
    
    return 0;
}