#include <stdio.h>

int main(){
    int num1, num2, adc;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    adc = num1 + num2;
    
    if (adc >= 10)
    {
        printf("Resultado: %d", adc);
    } else{
        printf("Soma menor do que 10!");
    }
    
    return 0;
}