#include <stdio.h>

int main() {
    int dia, mes, ano;
    int bissexto = 0;

    printf("Digite uma data no formato dd/mm/aa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Verifica se ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        bissexto = 1;
    }

    // Verifica mês válido
    if (mes < 1 || mes > 12) {
        printf("Data invalida: mes %d nao existe.\n", mes);
        return 0;
    }

    // Dias máximos de cada mês
    int diasNoMes;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasNoMes = 31;
            break;
        case 4: case 6: case 9: case 11:
            diasNoMes = 30;
            break;
        case 2:
            diasNoMes = bissexto ? 29 : 28;
            break;
        default:
            diasNoMes = 0; // nunca chega aqui porque já verificou mês
    }

    // Verifica se o dia é válido
    if (dia < 1 || dia > diasNoMes) {
        printf("Data invalida: o mes %d nao tem dia %d.\n", mes, dia);
    } else {
        printf("Data valida: %02d/%02d/%02d\n", dia, mes, ano);
    }

    return 0;
}