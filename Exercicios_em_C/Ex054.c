#include <stdio.h>
#include <time.h>


int main(){

    srand(time(NULL));
    int chute, aleatorio, tentativas = 0;

    do{
        printf("Informe um chute: ");
        scanf("%d", &chute);
        tentativas += 1;

        aleatorio = rand() % 100;
        printf("%d\n", aleatorio);

        if(aleatorio > chute){
            printf("O seu chute foi menor que o valor secreto!\n");

        }
        else if(aleatorio < chute){
            printf("O seu chute foi maior que o valor secreto!\n");
        }
        else{
            printf("Chute correto!\n");
        }

    }while(chute != aleatorio);

    printf("Parabéns você acertou, com %d tentativas!\n", tentativas);

    return 0;
}
