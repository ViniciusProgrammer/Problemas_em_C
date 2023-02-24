#include <stdio.h>

int main()
{
    int i, soma = 0;

    for(i = 1; i < 11; i++){
        printf("Informe um valor: ");
        scanf("%d", &i);
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}
