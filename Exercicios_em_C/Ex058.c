#include <stdio.h>

int main()
{
    int vet1[10], vet2[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Informe um valor para a posição %d: ", i);
        scanf("%d", &vet1[i]);
    }

    for(i = 0; i < 10; i++){
        vet2[i] = vet1[i] * 2;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", vet2[i]);
    }
    
    return 0;
}
