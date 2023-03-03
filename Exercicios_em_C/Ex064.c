#include <stdio.h>

int main()
{
    float maior, menor, soma = 0, vet[5];
    int i, cont = 0;

    for(i = 0; i < 5; i++){
        printf("Informe um valor: ");
        scanf("%f", &vet[i]);

        soma += vet[i];
        cont++;
    }

    for(i = 0; i < 5; i++){
        if(i == 0){
            maior = menor = vet[i];
        }
        else{
            if(vet[i] > maior){
                maior = vet[i];
            }
            if(vet[i] < menor){
                menor = vet[i];
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("%.2f ", vet[i]);
    }

    printf("\n%.2f\n", maior);
    printf("%.2f\n", menor);

    return 0;
}
