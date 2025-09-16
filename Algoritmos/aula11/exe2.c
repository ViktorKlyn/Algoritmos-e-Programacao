#include <stdio.h>

int main() {
    int senha, tentativas = 0;
    const int senha_correta = 1786;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senha_correta) {
            printf("Bom dia! Seja bem-vindo!\n");
            return 0; // encerra o programa após sucesso
        } else {
            printf("Acesso negado! Senha inválida.\n");
            tentativas++;
        }
    }

    printf("Número máximo de tentativas atingido. Encerrando o programa.\n");
    return 0;
}