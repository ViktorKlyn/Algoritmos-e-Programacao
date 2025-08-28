#include <stdio.h>

int main(){
    char conceito;
    
    printf("Digite o conceito do aluno [A] [B] [C] [D]: ");
    scanf("%c", &conceito);

    switch (conceito){
        case 'A': {
            printf("Exelente");
            break;
        }
        case 'B': {
            printf("Bom");
            break;
        }
        case 'C': {
            printf("Regular");
            break;
        }
        case 'D': {
            printf("Reprovado");
            break;
        }
        default: {
            printf("Opcao invalida!");
        }
    }

    return 0;
}