#include <stdio.h>

int main()
{
    float km, m;

    printf("Informe a velocidade em Km: ");
    scanf("%f", &km);

    m = km/3.6;

    printf("A velocidade em m/s é %.2f\n", m);
    
    return 0;
}
