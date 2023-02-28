#include <stdio.h>

int main()
{
    int i, num;

    printf("Informe o ponto de partida: ");
    scanf("%d", &num);

    for(i = num; i >= 0; i--){
        printf("%d ", i);
        if(i == 0){
            printf("\n");
        }
    }

    return 0;
}
