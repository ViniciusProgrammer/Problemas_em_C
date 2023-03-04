#include <stdio.h>

int main(){
    
    int vet[6];
    int i, somaPares = 0, quantImpar = 0;

    for(i = 0; i < 6; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            somaPares += vet[i];
        }

        else{
            quantImpar++;
        }

    }

    for(i = 0; i < 6; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }

    printf("\n\n");
    
    for(i = 0; i < 6; i++){
        if(vet[i] % 2 == 1){
            printf("%d ", vet[i]);
        }
    }

    printf("\nA soma dos valores pares = %d\n", somaPares);
    printf("A quantidade de valores impares no vetor = %d\n", quantImpar);

    return 0;
}
