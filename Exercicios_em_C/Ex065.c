#include <stdio.h>

int main()
{
    float vet[5];
    int i, opc;

    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);
    }

    printf("1-Vetor normal\n2-Vetor inverso\nEscolha: ");
    scanf("%d", &opc);

    switch(opc){
        case(1):
        for(i = 0; i < 5; i++){
            printf("%.2f ", vet[i]);
        }

        printf("\n");
        break;

        case(2):
        for(i = 4; i >= 0; i--){
            printf("%.2f ", vet[i]);
        }

        printf("\n");
        break;

        default:
            printf("Opção Inválida\n");
            printf("\n");
    }

    return 0;
}
