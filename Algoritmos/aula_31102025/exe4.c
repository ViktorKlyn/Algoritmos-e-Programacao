#include <stdio.h>

#define TAMANHO_MAX_NOME 50

void imprimir_saudacao(const char *nome)
{
    printf("\nOla, *%s*! Bem-vindo(a)\n", nome);
}

int main()
{
    char nome_usuario[TAMANHO_MAX_NOME];

    printf("Por favor, digite o seu nome (maximo %d caracteres): ", TAMANHO_MAX_NOME - 1);

    if (scanf("%49s", nome_usuario) != 1)
    {
        fprintf(stderr, "Erro ao ler o nome.\n");
        return 1;
    }

    imprimir_saudacao(nome_usuario);

    return 0;
}