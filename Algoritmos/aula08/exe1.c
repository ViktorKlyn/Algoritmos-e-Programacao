#include <stdio.h>
#include <math.h>

int main(){
    double altura, peso, imc;

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    printf("Digite o seu peso: ");
    scanf("%lf", &peso);

    imc = peso / pow(altura, 2);

    printf("O seu IMC eh de: %lf\n", imc);

    if (imc < 18.5)
    {
        ("Voce esta magro!");
    }
    else if(imc > 18.5 && imc < 24.9)
    {
        printf("O seu peso esta normal!");
    }
    else if(imc > 24.9 && imc < 29.9)
    {
        printf("Seu peso esta acima da media!");
    } else{
        printf("Voce esta obeso!");
    }

    return 0;
}