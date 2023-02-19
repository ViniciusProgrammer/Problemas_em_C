#include <stdio.h>

int main()
{
    float rad, g, pi = 3.14;

    printf("Digite um angulo em graus: ");
    scanf("%f", &g);

    rad = g * (pi/180);

    printf("O angulo em radianos é %.2f\n", rad);

    return 0;
}
