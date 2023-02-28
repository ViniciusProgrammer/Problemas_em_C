#include <stdio.h>

int main()
{
    int num, i;

    printf("Informe um valor: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            if(i < num){
                printf("%d, ", i);
            }
            else{
                printf("%d ", i);
                printf("\n");
            }
        }
    }

    return 0;
}
