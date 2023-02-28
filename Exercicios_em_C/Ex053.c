#include <stdio.h>

int main()
{
    int idade, somaIdade = 0, cont = 0; 
    double media = 0;

    do{
        printf("Informe a sua idade: ");
        scanf("%d", &idade);
        
        if(idade != 0){
            somaIdade += idade;
            cont++;
        }

    }while(idade != 0);

    media = (somaIdade/cont);

    printf("A média de idade do grupo é %.1f\n", media);
    
    return 0;
}
