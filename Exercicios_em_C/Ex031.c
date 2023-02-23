#include <stdio.h>

int main()
{   
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0 && !(ano % 100 == 0)){
        printf("O ano é Bissexto\n");
    }
    else{
        printf("O ano não é Bissexto\n");
    }

    return 0;
}
