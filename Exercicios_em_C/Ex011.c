#include <stdio.h>

int main()
{
    float imposto = 8.0/100;
    float valorDia = 30.0;
    int dias;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    printf("%.2f reais\n", (dias * valorDia) - ((dias * valorDia) * imposto));

    return 0;
}
