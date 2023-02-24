#include <stdio.h>

int main()
{
    int soma = 0;

    while(soma != 100000){
        soma += 1000;
        printf("%d\n", soma);
    }

    return 0;
}
