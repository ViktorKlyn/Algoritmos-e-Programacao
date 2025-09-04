#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero inteiro para ver sua tabuada: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}