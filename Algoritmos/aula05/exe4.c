#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, d;

    printf("Digite as coordenadas do ponto P1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coorednadas do ponto P2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos eh: %.2lf\n", d);
    
    return 0;
}