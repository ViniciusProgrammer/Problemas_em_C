#include <stdio.h>

int main()
{
    int i, maior, num, valor, cont = 0;

    printf("Informe o limite: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("Informe um valor: ");
        scanf("%d", &valor);

        if(i == 1){
            maior = valor;
            cont++;
        }
        else{
            if(valor > maior){
                maior = valor;
                cont++;
            }
        }
    }    

    printf("O maior número foi %d\n", valor);
    printf("O maior valor foi digitado %d vezes\n", cont);

    return 0;
}
