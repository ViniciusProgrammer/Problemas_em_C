#include <stdio.h>

int main()
{
    int op;
    float valor;
    
    printf("Informe o valor total da compra: ");
    scanf("%f", &valor);


    printf("1-Para pagamento à vista 10 porcento de desconto\n2-Para pagar em até 3x sem juros\n\nEscolha: ");
    scanf("%d", &op);

    switch(op){

        case(1):
            printf("O valor a ser pago com 10 porcento de desconto: %.2f\n", valor - (valor * 10.0/100));
            printf("A comição do vendedor será: %.2f\n", (valor * 10.0/100) * 5.0/100);
            break;
        
        case(2):
            printf("O valor por parcela será de %.2f\n", valor/3);
            printf("A comição do vendedor será: %.2f\n", valor * 5.0/100);
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
