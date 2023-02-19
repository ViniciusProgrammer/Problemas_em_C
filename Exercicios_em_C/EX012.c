#include <stdio.h>

int main()
{
    int valorHora, horas;
    float bonus;

    bonus = 110/100.0;

    printf("Informe o valor por hora do empregado: ");
    scanf("%d", &valorHora);

    printf("Informe o número de horas trabalhadas no mês: ");
    scanf("%d", &horas);

    printf("O valor a ser pago: %.2f\n", horas * valorHora * bonus);

    return 0;
}
