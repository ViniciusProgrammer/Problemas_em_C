#include <stdio.h>

int main()
{
    float c, f;

    printf("Informe uma temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = 5.0 * (f - 32.0)/ 9.0;

    printf("A temperatura em Celsius: %.2fC\n", c);

    return 0;
}
