#include <stdio.h>

int main()
{
    int num, somaPar = 0, somaImpar = 0;

    do{
        printf("Informe um valor: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            if(num <= 1000){
                somaPar += num;
            }
        }
        
        else{
            somaImpar += num;
        }

    }while(num <= 1000);

    printf("A soma dos valores pares é = %d\n", somaPar);
    printf("A soma dos valores imapares é = %d\n", somaImpar);

    return 0;
}
