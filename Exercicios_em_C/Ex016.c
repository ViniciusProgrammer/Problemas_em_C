#include <stdio.h>

int main(){
    
    int num1, num2;

    printf("Informe dois valores: ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2){
        printf("O primeiro valor digitado é maior!\n");
    }

    else if(num1 == num2){
        printf("Os dois valores são iguais\n");
    }

    else{
        printf("O segundo valor digitado é maior\n");
    }

    return 0;
}
