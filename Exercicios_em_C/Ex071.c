#include <stdio.h>

int posNeg(int num){

    if(num > 0){
        return 1;
    }
    else if(num < 0){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){

    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    printf("%d\n", posNeg(valor));

    return 0;
}
