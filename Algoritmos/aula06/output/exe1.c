#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Os numeros sao iguais!");
    }
    else{
        printf("Os numeros sao diferentes!");
    }
    
    return 0;
}