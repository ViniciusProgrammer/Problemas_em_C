#include <stdio.h>

int main()
{
    float km, litros, razao;

    printf("Informe a quantidade de quilmetros e a quantidade de litros: ");
    scanf("%f%f", &km, &litros);

    razao = (km/litros);

    printf("Km/L = %.1f\n", razao);

    if(razao < 8.0){
        printf("Venda o carro\n");
    }
    else if(razao>= 8.0 && razao <= 14.0){
        printf("Carro econômico\n");
    }
    else{
        printf("Carro super econômico\n");
    }

    return 0;
}
