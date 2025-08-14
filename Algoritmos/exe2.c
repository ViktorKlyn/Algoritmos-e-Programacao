#include <stdio.h>
#include <math.h>

int main()
{
    double n1, n2, mult, raiz;
    
    printf("Digite n1:");
    scanf("%lf", &n1);
    printf("Digite n2:");
    scanf("%lf", &n2);

    mult = n1 * n2;
    raiz = sqrt(mult);

    printf("A raiz quadrada da multiplicacao de %.2lf * %.2lf eh: %.2lf", n1, n2, raiz);

    return 0;
}