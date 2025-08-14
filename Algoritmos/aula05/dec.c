#include <stdio.h>
#include <math.h>

int main(){
    double decimal;

    printf("Digite um numero decimal:");
    scanf("%lf", &decimal);
    printf("Floor: %.1lf\n", floor(decimal));
    printf("Ceil: %.1lf\n", ceil(decimal));
    printf("Round: %.1lf\n", round(decimal));

    return 0;
}