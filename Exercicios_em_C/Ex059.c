#include <stdio.h>

int main()
{
    int vet[10];
    int i, contPares = 0;

    for(i = 0; i < 10; i++){
        printf("Informe um valor para a posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }

    for(i = 0; i < 10; i++){
        if(vet[i] % 2 == 0){
            contPares += 1;
            if(vet[i] == 0){
                contPares --;
            }
        }
    }

    printf("\nNo vetor existem %d valores pares\n", contPares);

    return 0;
}
