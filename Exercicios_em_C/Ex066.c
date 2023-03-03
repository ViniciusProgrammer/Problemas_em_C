#include <stdio.h>

int main()
{
    int i, vet[10];

    for(i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        if(vet[i] < 0){
            vet[i] = 0;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    
    return 0;
}
