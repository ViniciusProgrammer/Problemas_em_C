#include <stdio.h>

void parouimpar(int n){
    
    if(n % 2 == 0){
        printf("O número %d é par!\n", n);
    }
    else{
        printf("O número %d é impar\n", n);
    }
}

int main()
{
    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    parouimpar(num);

    return 0;
}
