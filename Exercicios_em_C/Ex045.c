#include <stdio.h>

int main()
{
    int i, num, soma = 0;

    printf("Informe um valor: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}
