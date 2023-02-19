#include <stdio.h>

int main()
{
    float milhas, km;

    printf("Informe uma distãncia em milhas: ");
    scanf("%f", &milhas);

    km = milhas * 1.61;

    printf("A distãncia em milhas para km é: %.1f\n", km);

    return 0;
}
