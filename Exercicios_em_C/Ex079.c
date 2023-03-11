#include <stdio.h>

int main()
{
    int vet[10];
    int i, maior, menor;

    for(i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &vet[i]);

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

    for(i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

    printf("\nO maior valor no vetor = %d\n", maior);
    printf("O menor valor no vetor = %d\n", menor);    
    
    return 0;
}