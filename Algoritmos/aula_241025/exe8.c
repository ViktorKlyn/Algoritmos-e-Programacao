#include <stdio.h>

int main() {
    char nomes[5][20]; // matriz 5x20 para armazenar 5 nomes de até 19 letras (+1 pro '\0')

    printf("=== Cadastro de Usuarios ===\n");

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do usuario %d: ", i + 1);
        scanf("%19s", nomes[i]); // lê até 19 caracteres (sem espaços)
    }

    printf("\n=== Lista de Usuarios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s\n", i + 1, nomes[i]);
    }

    return 0;
}
