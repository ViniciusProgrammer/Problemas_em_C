#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int vet[10];
    int i, num;

    for(i = 0; i < 10; i++){
        vet[i] = rand() % 21;
    }

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    for(i = 0; i < 10; i++){
        if(vet[i] == num){
            printf("\nO valor digitado %d está na posição %d\n", num, i);
        }
    }
    printf("\n");
    
    return 0;
}
