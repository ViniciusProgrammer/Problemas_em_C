#include <stdio.h>

int main()
{
    int i, num;

    printf("Informe o limite de parada: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){
        printf("%d, ", i);

        if(i == num){
            printf("%d\n", num + 1);
        }
    }

    return 0;
}
