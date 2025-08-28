#include <stdio.h>

int main(){
    double precoProduto;
    int opcao;

    printf("Preco do produto: R$");
    scanf("%lf", &precoProduto);

    printf("Escolha uma opcao de pagamento: \n");
    printf("[1] Vista\n");
    printf("[2] Credito\n");
    printf("[3] 2x a vista\n");
    printf("[4] 2x credito\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            precoProduto = precoProduto - (precoProduto * 0.10);
            printf("O preco final do produto eh: R$ %.2lf", precoProduto);
            break;
        case 2:
            precoProduto = precoProduto - (precoProduto * 0.15);
            printf("O preco final do produto eh: R$ %.2lf", precoProduto);
            break;
        case 3:
            printf("O preco final do produto eh: R$ %.2lf", precoProduto);
            break;
        case 4:
            precoProduto = precoProduto + (precoProduto * 0.10);
            printf("O preco final do produto eh: R$ %.2lf", precoProduto);
            break;
        default:
            printf("Opcao invalida!");
    }
    return 0;
}