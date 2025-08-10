#include <stdio.h>

int main() {
    int data;
    int dia, mes, ano;

    printf("Digite a data no formato ddmmaa: ");
    scanf("%d", &data);

    dia = data / 10000;           // pega os 2 primeiros dígitos
    mes = (data / 100) % 100;     // pega o 3º e 4º dígito
    ano = data % 100;             // pega os 2 últimos dígitos

    printf("Dia: %02d Mes: %02d Ano: %02d\n", dia, mes, ano);

    return 0;
}