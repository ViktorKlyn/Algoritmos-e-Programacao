#include <stdio.h>
#include <stdlib.h>

void registrar_status()
{
    // Ponteiro para o código de status (inteiro)
    int *status_code_ptr = NULL;

    printf("----- 1. Alocacao para codigo de status -----\n");

    // Correção: usar sizeof(int)
    status_code_ptr = malloc(sizeof(int));

    if (status_code_ptr == NULL)
    {
        fprintf(stderr, "ERRO: Falha ao alocar memoria para status code.\n");
        return; // encerra a função se não conseguiu alocar
    }

    // Atribuição de valor (simulando resposta de sucesso)
    *status_code_ptr = 200; // desreferencia o ponteiro e armazena o valor 200

    printf("Memoria alocada em: %p\n", (void *)status_code_ptr);
    printf("Status code registrado (usando *): %d\n", *status_code_ptr);

    // --------------------------------------------------------------------

    printf("\n----- 2. Liberacao de recurso de memoria -----\n");

    // Libera a memória alocada
    free(status_code_ptr);
    status_code_ptr = NULL;

    printf("Status code processado. Memoria liberada.\n");
}

int main()
{
    registrar_status();
    return 0;
}
