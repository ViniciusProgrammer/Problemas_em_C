#include <stdio.h>

int dobraValor(int num){
    int result = num * 2;

    return result;
}

int main(){
    
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    printf("%d\n", dobraValor(valor));

    return 0;
}
