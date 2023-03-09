#include <stdio.h>

int main(){
    int num, i, valor;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &num);

    int vet[num];

    for(i = 0; i <= num; i++){
        printf("Informe um valor: ");
        scanf("%d", &valor);

        vet[i] = valor;
    }

    for(i = 0; i <= num; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");
    
    return 0;
}
