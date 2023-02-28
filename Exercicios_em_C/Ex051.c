#include <stdio.h>

int main()
{
    int i, num, somaDiv = 0;

    printf("Informe um valor: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++){
        if(num % i == 0){
            printf("%d ", i);
            somaDiv += i;
        }
    }

    printf("\nA soma dos divisores de %d = %d\n", num, somaDiv);

    return 0;
}
