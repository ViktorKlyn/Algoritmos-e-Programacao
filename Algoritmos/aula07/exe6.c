#include <stdio.h>
#include <math.h>

int main(){
    double peso, altura, imc;

    printf("Seu peso: ");
    scanf("%lf", &peso);

    printf("Sua altura: ");
    scanf("%lf", &altura);

    imc = peso / pow(altura, 2);

    printf("Seu imc eh de: %.2lf\n", imc);

    if (imc < 18.5)
    {
        printf("Sua condicao eh de magreza!");
    }
    else if(imc > 18.5 && imc <= 24.9)
    {
        printf("Seu peso esta normal!");
    }
    else if(imc > 24.9 && imc <= 29.9)
    {
        printf("Seu peso esta acima da media!");
    } else{
        printf("Voce esta obeso!");
    }
    
    return 0;
}