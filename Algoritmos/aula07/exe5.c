#include <stdio.h>

int main(){
    char sexo;
    double altura, pesoIdeal;

    printf("Digite seu sexo [M] ou [F]: ");
    scanf("%c", &sexo);

    printf("Digite sua altura(m): ");
    scanf("%lf", &altura);

    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal eh: %.2lf", pesoIdeal);
    } else if(sexo == 'F' || sexo == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh: %.2lf", pesoIdeal);
    } else{
        printf("Caracter invalido!");
    }
    
    return 0;
}