#include <stdio.h>

int main()
{
    int i, vet[6];

    for(i = 0; i < 6; i++){
        printf("Informe um valor: ");
        scanf("%d", &vet[i]);
    }

    for(i = 5; i >= 0; i--){
        printf("%d ", vet[i]);
    }

    printf("\n");
    
    return 0;
}
