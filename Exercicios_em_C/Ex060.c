#include <stdio.h>

int main(){
    
    int vet[10];
    int i, maior = 0 , menor;

    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }

        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("maior %d e menor %d\n", maior, menor);

    return 0;
}
