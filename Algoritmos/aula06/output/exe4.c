#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Voce eh menor de idade!");
    } else{
        if (idade >= 18 && idade < 65)
        {
            printf("Voce esta na idade adulta!");
        } else {
            printf("Voce eh idoso!");
        }
    }
    
    return 0;
}