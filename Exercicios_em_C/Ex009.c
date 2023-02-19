#include <stdio.h>

int main()
{
    float valor;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);

    printf("%.2f\n", (valor - (valor * 12)/100));

    return 0;
}
