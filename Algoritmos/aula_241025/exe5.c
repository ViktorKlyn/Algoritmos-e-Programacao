#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[50];
    int contador = 0;

    printf("Digite uma frase (max 49 caracteres): ");
    fgets(frase, 50, stdin); // lê a string com espaços

    for (int i = 0; i < strlen(frase); i++) {
        char c = tolower(frase[i]); // transforma em minúscula pra facilitar
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("\nNumero total de vogais: %d\n", contador);
    return 0;
}
