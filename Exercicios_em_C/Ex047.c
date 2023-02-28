#include <stdio.h>

int main()
{
    int num, cont = 0, numPares = 0;

    do{
        printf("Informe um valor: ");
        scanf("%d", &num);
        cont++;

        if(num % 2 == 0 && num != 1000){
            numPares++;
        }

    }while(num != 1000);

    printf("O total de valores lidos foram %d valores\n", cont);
    printf("O total de números pares lidos foi %d valores\n", numPares);

    return 0;
}
