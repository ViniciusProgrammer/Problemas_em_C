#include <stdio.h>

int main()
{
    float total;
    int opc, numParcelas;

    printf("Informe o total a pagar pelo cliente: ");
    scanf("%f", &total);

    printf("1- Para pagamento à vista e com 10 porcento de desconto\n2-Para pagar o preço normal em 2x\n3-Para pagamento parcelado de 3x a 10x\nEscolha: ");
    scanf("%d", &opc);

    if(opc == 3 && total > 100){
        printf("Informe a quantidade de parcelas que deseja dividir: ");
        scanf("%d", &numParcelas);
    }

    switch(opc){
        case 1:
            printf("O total a pagar pelo cliente será %.2f\n", total - (total * 10.0/100));
            break;
        case 2:
            printf("O total a ser pago pelo cliente será %.2f\n", total);
            break;
        case 3:
            printf("O total a pagar pelo cliente será: %.2f\n", ((total * (103/100.0) - total) * numParcelas) + (total));
            break;                                      //tx de juros em cima do tot - valor ini * tot mes  + o tot pra vermos o valor final
    }

    return 0;
}
