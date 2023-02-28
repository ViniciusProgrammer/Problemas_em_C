#include <stdio.h>

int main()
{
    int i, f, somaPar = 0, multiImpar = 1;

    printf("Informe o início: ");
    scanf("%d", &i);

    printf("Informe o final: ");
    scanf("%d", &f);

    for(i = i; i <= f; i++){
        if(i % 2 == 0){
            somaPar += i;
        }
        else{
            multiImpar *= i;
        }
    }

    printf("O total de valores pares nesse intervalo = %d\n", somaPar);
    printf("A multiplicação dos valores impares é %d\n", multiImpar);

    return 0;
}
