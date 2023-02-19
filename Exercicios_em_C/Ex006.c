#include <stdio.h>

int main()
{
    float p, c;

    printf("Informe um comprimento em polegadas: ");
    scanf("%f", &p);

    c = p * 2.54;

    printf("O comprimento em centimentros %.2f\n", c); 
    
    return 0;
}
