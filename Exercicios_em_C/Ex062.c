#include <stdio.h>

int main()
{
    float vet[10], soma = 0;
    int i, negativos = 0;

    for(i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%f", &vet[i]);

        if(vet[i] < 0){
            negativos++;
        }
        else{
            if(vet[i] >= 0){
                soma += vet[i];
            }
        }
    }

    printf("O total de números negativos no vetor = %d\n", negativos);
    printf("A soma dos elementos do vetor = %.2f\n", soma);
    
    return 0;
}
