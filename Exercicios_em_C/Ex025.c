#include <stdio.h>

int main()
{
    int opc;
    float num1, num2;

    printf("1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\nEscolha: ");
    scanf("%d", &opc);

    switch(opc){
        case 1:
            scanf("%f%f", &num1, &num2);
            printf("%.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
            break;

        case 2:
            scanf("%f%f", &num1, &num2);
            printf("%.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
            break;
        
        case 3:
            scanf("%f%f", &num1, &num2);
            printf("%.0f x %.0f = %.0f\n", num1, num2, num1 * num2);
            break;
        case 4:
            scanf("%f%f", &num1, &num2);
            printf("%.0f / %.0f = %.0f\n", num1, num2, num1 / num2);
            break;
            
        default:
            printf("Opção Inválida!\n");
    }

    return 0;
}
