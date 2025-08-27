#include <stdio.h>

    int main(){
        int n1, n2, n3, temp;

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);

        printf("Digite o terceiro numero: ");
        scanf("%d", &n3);

        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n1 > n3)
        {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if (n2 > n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        
        printf("Os numeros em ordem crescente: %d, %d, %d\n", n1, n2, n3);
        
        return 0;
    }