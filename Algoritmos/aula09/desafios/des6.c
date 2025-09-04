#include <stdio.h>

int main() {
    int prato, sobremesa, bebida;
    int calorias = 0;

    printf("Escolha um prato:\n");
    printf("1 - Vegetariano (180 cal)\n");
    printf("2 - Peixe (230 cal)\n");
    printf("3 - Frango (250 cal)\n");
    printf("4 - Carne (350 cal)\n");
    printf("Opcao: ");
    scanf("%d", &prato);

    switch(prato) {
        case 1: calorias += 180; break;
        case 2: calorias += 230; break;
        case 3: calorias += 250; break;
        case 4: calorias += 350; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    printf("\nEscolha uma sobremesa:\n");
    printf("1 - Abacaxi (75 cal)\n");
    printf("2 - Sorvete diet (110 cal)\n");
    printf("3 - Mousse diet (170 cal)\n");
    printf("4 - Mousse chocolate (200 cal)\n");
    printf("Opcao: ");
    scanf("%d", &sobremesa);

    switch(sobremesa) {
        case 1: calorias += 75; break;
        case 2: calorias += 110; break;
        case 3: calorias += 170; break;
        case 4: calorias += 200; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    printf("\nEscolha uma bebida:\n");
    printf("1 - Cha (20 cal)\n");
    printf("2 - Suco de Laranja (70 cal)\n");
    printf("3 - Suco de Melão (100 cal)\n");
    printf("4 - Refrigerante diet (65 cal)\n");
    printf("Opcao: ");
    scanf("%d", &bebida);

    switch(bebida) {
        case 1: calorias += 20; break;
        case 2: calorias += 70; break;
        case 3: calorias += 100; break;
        case 4: calorias += 65; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    printf("\nTotal de calorias da refeicao: %d cal\n", calorias);

    return 0;
}
