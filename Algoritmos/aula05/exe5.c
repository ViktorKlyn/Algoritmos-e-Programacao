#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, r, s;

    printf("Digite 3 numeros inteiros positivos (A, B, C):");
    scanf("%d %d %d", &a, &b, &c);

    r = pow((a + b), 2);
    s = pow((b + c), 2);

    printf("R = %d\n", r);
    printf("S = %d\n", s);

    return 0;
}