#include <stdio.h>

long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // caso base
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo!\n");
    } else {
        printf("Fatorial de %d = %lld\n", n, fatorial(n));
    }

    return 0;
}
