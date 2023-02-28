#include <stdio.h>

int main()
{
    int i, num, valor, soma = 0;

    printf("Informe o limite: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("Informe o valor %d\n", i);
        scanf("%d", &valor);

        if(valor % 2 == 0){
            soma += valor;
        }
        
    }

    printf("%d\n", soma);

    return 0;
}
