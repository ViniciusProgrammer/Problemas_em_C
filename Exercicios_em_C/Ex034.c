#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int i, j, acertou = 0, a, b, soma, cont = 1;
    int vet[5];

    for(i = 0; i < 5; i++){
        a = rand() % 101;
        b = rand() % 101;
        vet[i] = a + b;
        
        printf("Qual é a soma entre %d + %d\n", a, b);
        scanf("%d", &soma);

        if(soma == (a + b)){
            acertou++;
        }
    }

    printf("\nVocê obteve %d acertos!\n\n", acertou);

    for(i = 0; i < 5; i++){
        printf("O resultado da questão %d valia = %d\n", cont, vet[i]);
        cont ++;
    }

    return 0;
}
