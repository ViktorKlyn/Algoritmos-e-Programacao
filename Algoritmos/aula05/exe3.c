#include <stdio.h>
#include <math.h>

int main(){
    int a1, r, n, an;

    printf("Digite o primeiro termo (a1):");
    scanf("%d", &a1);

    printf("Digite a razao (r):");
    scanf("%d", &r);

    printf("Digite o numero de ordem (n):");
    scanf("%d", &n);

    an = a1 + (n - 1) * r;

    printf("O termo de %d da PA eh: %d\n", n, an);
    
    return 0;
}