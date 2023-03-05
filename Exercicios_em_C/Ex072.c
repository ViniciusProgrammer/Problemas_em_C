#include <stdio.h>

void maior(int num1, int num2){
    if(num1 > num2){
        printf("O primeiro valor é maior\n");
    }
    else{
        printf("O segundo valor é maior\n");
    }
}

int main(){
    int a, b;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Digite outro valor: ");
    scanf("%d", &b);

    maior(a, b);
    
    return 0;
}
