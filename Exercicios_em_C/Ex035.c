#include <stdio.h>

int main()
{
    int opc, quantidade;

    printf("100-Cachorro quente\n101-Bauru simples\n102-Bauru com Ovo\n103-Haburguer\n104-Chessebuerguer\n105-Suco\n106-Refrigerante\n");
    scanf("%d", &opc);

    switch(opc){
        case 101:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 1.20);
            break;
        
        case 102:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 1.30);
            break;
        
        case 103:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 1.50);
            break;
        
        case 104:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 1.20);
            break;
        
        case 105:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 1.70);
            break;
        
        case 106:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 2.20);
            break;

        case 107:
            scanf("%d", &quantidade);
            printf("O total a pagar pelo pedido = %.2f\n", quantidade * 1.00);
            break;

        default:
            printf("Opção inválida!\n");
    }
    return 0;
}
