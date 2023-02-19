#include <stdio.h>

int main()
{
    float f, celsius;

    printf("Informe uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    f = (celsius * (9.0/5.0)) + 32;

    printf("A temperatura em Fahrenheit é %.2fF\n", f);

    return 0;
}
