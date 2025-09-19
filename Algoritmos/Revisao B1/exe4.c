#include <stdio.h>

int main()
{
    int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    int nulos = 0, brancos = 0;

    printf("Digite o codigo do voto (1-4 = candidatos, 5 = nulo, 6 = branco, 0 = fim):\n");

    while (1) // loop até receber 0
    {
        scanf("%d", &voto);

        if (voto == 0) // finaliza
        {
            break;
        }

        switch (voto)
        {
        case 1:
            cand1++;
            break;
        case 2:
            cand2++;
            break;
        case 3:
            cand3++;
            break;
        case 4:
            cand4++;
            break;
        case 5:
            nulos++;
            break;
        case 6:
            brancos++;
            break;
        default:
            printf("Codigo invalido! Digite de novo.\n");
            break;
        }
    }

    printf("\nResultado da Eleicao:\n");
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);
    printf("Candidato 4: %d votos\n", cand4);
    printf("Nulos: %d votos\n", nulos);
    printf("Brancos: %d votos\n", brancos);

    return 0;
}