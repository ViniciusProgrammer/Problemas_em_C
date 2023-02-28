#include <stdio.h>

int main()
{
    int i, num;

    do{
        printf("Informe um valor positivo par: ");
        scanf("%d", &num);

    }while(num % 2 == 1);

    for(i = 0; i <= num; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
