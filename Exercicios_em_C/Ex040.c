#include <stdio.h>

int main()
{
    int soma = 0, media = 0, i, j;

    for(i = 1; i < 11; i++){
        printf("Informe um valor: ");
        scanf("%d", &j);
        soma += j;
        media++;
    }
    printf("A média = %d\n", soma/media);

    return 0;
}
