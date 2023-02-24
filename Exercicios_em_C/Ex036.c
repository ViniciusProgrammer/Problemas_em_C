#include <stdio.h>

int main()
{
    float valor;

    printf("Informe o valor: ");
    scanf("%f", &valor);

    if(valor <= 50){
        printf("O valor sofrerá um reajuste de 5 porcento\n");
        printf("%.2f\n", valor + (valor * 5.0/100));
    }
    else if(valor > 50 && valor <= 100){
        printf("O valor sofrerá um reajuste de 10 porcento\n");
        printf("%.2f\n", valor + (valor * 10.0/100));
    }
    else{
        printf("O valor sofrerá um reajuste de 15 porcento\n");
        printf("%.2f\n", valor + (valor * 15.0/100));
    }

    return 0;
}
