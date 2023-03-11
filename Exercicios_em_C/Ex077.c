#include <stdio.h>

int main()
{
    float area, larg, compri;

    printf("Informe a largura do terreno: ");
    scanf("%f", &larg);

    printf("Informe o comprimento do terreno: ");
    scanf("%f", &compri);

    area = larg * compri;

    printf("A área do terreno = %.2f m2\n", area);

    return 0;
}
