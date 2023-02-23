#include <stdio.h>

int main()
{
    int idade, tempo;
    printf("Informe a sua idade e o seu tempo de serviço: ");
    scanf("%d%d", &idade, &tempo);

    if(idade >= 65 || tempo >=30){
        printf("Tá no tempo de se aposentar\n");
    }
    else if(idade >= 60 || tempo >= 25){
        printf("Tá no tempo de se aposentar\n");
    }
    else{
        printf("Não tá no tempo de se aposentar\n");
    }
    
    return 0;
}
