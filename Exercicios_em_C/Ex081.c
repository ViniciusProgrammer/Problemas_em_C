#include <stdio.h>

int main()
{
    int somaMult = 1, num, auxi = 1;

    while(auxi != 0){
        printf("Informe um valor: ");
        scanf("%d", &num);

        if(num != 0){
            somaMult *= num;
            
        }
        else{
            auxi = num;
        }
    }

    printf("Resultado = %d\n", somaMult);

    return 0;
}
