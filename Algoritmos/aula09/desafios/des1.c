#include <stdio.h>

int main()
{
    int i;
    double a, b, c;
    double media;

    printf("Informe um numero inteiro: ");
    scanf("%d", &i);

    printf("Informe mais tres numeros (podem ser decimais): \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (i % 2 == 0) {
        // Média aritmética
        media = (a + b + c) / 3.0;
        printf("Media aritmetica: %.2lf\n", media);
    }
    else if (i > 10) {
        // Média ponderada (pesos 2, 3 e 4)
        media = (a*2 + b*3 + c*4) / 9.0;
        printf("Media ponderada: %.2lf\n", media);
    }
    else {
        printf("Numero %d nao eh par e nao eh maior que 10, nenhuma media calculada.\n", i);
    }

    return 0;
}