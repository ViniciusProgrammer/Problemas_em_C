#include <stdio.h>

int main()
{
    int num, div = 0, i ;

    printf("Informe um valor: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++){
        if(num % i == 0){
            div += i;
            printf("%d é divisível por %d\n", num, i);
            
            if(div == num){
                printf("O número %d é perfeito!\n", num);
            }
        }
    }

    return 0;
}
