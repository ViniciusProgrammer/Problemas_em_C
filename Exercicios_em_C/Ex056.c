#include <stdio.h>

int main()
{   
    int i, j, tam;

    printf("O tamanho do triãngulo: ");
    scanf("%d", &tam);

    for(i = 1; i <= tam; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
