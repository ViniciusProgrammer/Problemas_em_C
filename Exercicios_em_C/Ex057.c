#include <stdio.h>

int main()
{
    int vet[6];
    int i;

    for(i = 0; i < 6; i++){
        printf("Informe um valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 6; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
